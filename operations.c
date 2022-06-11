/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:00:01 by oabushar          #+#    #+#             */
/*   Updated: 2022/05/18 18:00:25 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_push	*get_last_list(t_push *spec_a)
{
	t_push *last;

	while (spec_a->next->next)
	{
		spec_a = spec_a->next;
	}
	last = spec_a->next;
	spec_a->next = NULL;
	return (last);
}

int	find_biggest(t_push **spec_b, int args)
{
	int i;
	int index;

	i = 0;
	index = 0;
	while (*spec_b)
	{
		if ((*spec_b)->num > i)
		{
			i = (*spec_b)->num;
			index = (*spec_b)->index;
		}
		(*spec_b) = (*spec_b)->next;
	}
	if (index > args / 2)
		return (1);
	else 
		return (0);
}

void	big_help(t_push **spec_a, t_push **spec_b, int args)
{
	while (*spec_b)
	{
		if (find_biggest(spec_b, args))
			ft_rb(*spec_b);
		else if (!find_biggest(spec_b, args))
			ft_rrb(spec_b);
		else
			ft_pa(spec_a, spec_b);
	}
}


void	ft_sort_big(t_push **spec_a, t_push **spec_b, int args)
{
	int index;

	index = 0;
	while (*spec_a)
	{

		if ((*spec_a)->index <= index && index > 1)
		{
			ft_pb(spec_a, spec_b);
			ft_rb(*spec_b);
			index++;
		}
		else if ((*spec_a)->index <= index + 15)
		{
			ft_pb(spec_a, spec_b);
			index++;
		}
		else if ((*spec_a)->index >= index)
			ft_ra(*spec_a);
	}
	big_help(spec_a, spec_b, args);
}

void	ft_algorithm(int args, t_push *spec_a, t_push *spec_b)
{
	(void) spec_b;

	ft_get_index(spec_a, args);
	if (args == 2)
		ft_sa(spec_a);
	if (args == 3)
		ft_3(&spec_a);
	if (args == 4)
		ft_4(&spec_a, &spec_b);
	if (args == 5)
		ft_5(&spec_a, &spec_b);
	if (args > 5 && args <= 100)
		ft_sort_big(&spec_a, &spec_b, args);
}