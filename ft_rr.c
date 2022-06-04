/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:26:51 by oabushar          #+#    #+#             */
/*   Updated: 2022/06/04 20:32:55 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_push **spec_a)
{
	t_push *last;

	if (!(*spec_a))
		return ;
	last = get_last_list((*spec_a));
	last->next = (*spec_a);
	ft_add_front(spec_a, last);
}

void	ft_rrb(t_push **spec_b)
{
	t_push *last;

	if (!(*spec_b))
		return ;
	last = get_last_list((*spec_b));
	last->next = (*spec_b);
	ft_add_front(spec_b, last);
}

void    ft_rrr(t_push **spec_a, t_push **spec_b)
{
    ft_rra(spec_a);
    ft_rrb(spec_b);
}