/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 13:01:15 by oabushar          #+#    #+#             */
/*   Updated: 2022/06/11 21:49:48 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_front(t_push **lst, t_push *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}


void	ft_3(t_push **spec_a)
{
	int num[3];

	num[0] = (*spec_a)->num;
	num[1] = (*spec_a)->next->num;
	num[2] = (*spec_a)->next->next->num;

	if (num[0] > num[1] && num[0] < num[2])
		ft_sa(*spec_a);
	else if (num[0] > num[1] && num[2] > num[1])
		ft_rb(*spec_a);
	else if (num[1] > num[0] && num[0] > num[2])
		ft_rra(spec_a);
	else if (num[0] > num[1] && num[0] > num[2])
	{
		ft_sa(*spec_a);
		ft_rra(spec_a);
	}
	else if (num[0] < num[2] && num[1] > num[2])
	{
		ft_sa(*spec_a);
		ft_ra(*spec_a);
	}
}

void	ft_small_helper(t_push **spec_a, int i, int n)
{
	if (n < 3)
	{
		i = 0;
		while (i < n)
		{
			ft_ra(*spec_a);
			i++;
		}
	}
	else 
	{
		while (i >= n)
		{
			ft_rra(spec_a);
			i--;
		}
		
	}
}

void push_smallest_to_b(t_push **spec_a, t_push **spec_b)
{
	t_push *temp;
	int i;
	int n;
	int x;

	temp = *spec_a;
	x = temp->num;
	i = 0;
	n = 0;
	while (temp->next)
	{
		temp = temp->next;
		i++;
		if (x > temp->num)
		{
			n = i;
			x = temp->num;
		}
	}
	if (n != 0)
		ft_small_helper(spec_a, i, n);
	ft_pb(spec_a, spec_b);
}

void	ft_4(t_push **spec_a, t_push **spec_b)
{
	push_smallest_to_b(spec_a, spec_b);
	ft_3(spec_a);
	ft_pa(spec_a, spec_b);
}

void	ft_5(t_push **spec_a, t_push **spec_b)
{
	push_smallest_to_b(spec_a, spec_b);
	push_smallest_to_b(spec_a, spec_b);
	ft_3(spec_a);
	ft_pa(spec_a, spec_b);
	ft_pa(spec_a, spec_b);
}