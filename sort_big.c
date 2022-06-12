/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:50:49 by oabushar          #+#    #+#             */
/*   Updated: 2022/06/12 22:51:40 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_help(t_push **spec_a, t_push **spec_b, int args)
{
	int	i;

	i = 0;
	while (*spec_b)
	{
		i = ft_get_biggest(*spec_b, i);
		args = getarg(*spec_b);
		if ((*spec_b)->num == i)
			ft_pa(spec_a, spec_b);
		else if (find_biggest(*spec_b, args, i))
			ft_rb(spec_b);
		else if (!find_biggest(*spec_b, args, i))
			ft_rrb(spec_b);
	}
}

void	ft_sort_huge(t_push **spec_a, t_push **spec_b, int args)
{
	int	index;

	index = 0;
	while (*spec_a)
	{
		if ((*spec_a)->index <= index && index > 1)
		{
			ft_pb(spec_a, spec_b);
			ft_rb(spec_b);
			index++;
		}
		else if ((*spec_a)->index <= index + 30)
		{
			ft_pb(spec_a, spec_b);
			index++;
		}
		else if ((*spec_a)->index >= index)
			ft_ra(spec_a);
	}
	big_help(spec_a, spec_b, args);
}

void	ft_sort_big(t_push **spec_a, t_push **spec_b, int args)
{
	int	index;

	index = 0;
	while (*spec_a)
	{
		if ((*spec_a)->index <= index && index > 1)
		{
			ft_pb(spec_a, spec_b);
			ft_rb(spec_b);
			index++;
		}
		else if ((*spec_a)->index <= index + 15)
		{
			ft_pb(spec_a, spec_b);
			index++;
		}
		else if ((*spec_a)->index >= index)
			ft_ra(spec_a);
	}
	big_help(spec_a, spec_b, args);
}
