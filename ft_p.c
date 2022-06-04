/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:50:18 by oabushar          #+#    #+#             */
/*   Updated: 2022/06/04 20:50:34 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	ft_pa(t_push **spec_a, t_push **spec_b)
{
	t_push *top_b;

	top_b = (*spec_b);
	(*spec_b) = (*spec_b)->next;
	top_b->next = (*spec_a);
	(*spec_a) = top_b;
}

void	ft_pb(t_push **spec_a, t_push **spec_b)
{
	t_push *top_a;

	top_a = (*spec_a);
	(*spec_a) = (*spec_a)->next;
	top_a->next = (*spec_b);
	(*spec_b) = top_a;
}