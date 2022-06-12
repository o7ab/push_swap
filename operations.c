/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:00:01 by oabushar          #+#    #+#             */
/*   Updated: 2022/06/12 22:55:53 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_push	*get_last_list(t_push *spec_a)
{
	t_push	*last;

	while (spec_a->next->next)
	{
		spec_a = spec_a->next;
	}
	last = spec_a->next;
	spec_a->next = NULL;
	return (last);
}

int	ft_get_biggest(t_push *spec_b, int i)
{
	i = 0;
	while (spec_b)
	{
		if (spec_b->num > i)
		{
			i = spec_b->num;
		}
		spec_b = spec_b->next;
	}
	return (i);
}

int	find_biggest(t_push *spec_b, int args, int i)
{
	int	j;

	j = 0;
	while (spec_b && i != spec_b->num)
	{
		j++;
		spec_b = spec_b->next;
	}
	if (j < args / 2)
		return (1);
	else
		return (0);
}

int	getarg(t_push *spec_b)
{
	int	i;

	i = 0;
	while (spec_b)
	{
		i++;
		spec_b = spec_b->next;
	}
	return (i);
}

void	ft_algorithm(int args, t_push *spec_a, t_push *spec_b)
{
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
	if (args > 100 && args <= 500)
		ft_sort_huge(&spec_a, &spec_b, args);
}
