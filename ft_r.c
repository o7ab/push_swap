/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:56:04 by oabushar          #+#    #+#             */
/*   Updated: 2022/06/07 09:35:39 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_push	**ft_ra(t_push **spec_a)
{
	t_push *head;

	lst_add(spec_a, (*spec_a)->num);
	head = (*spec_a)->next;
	free (*spec_a);
	*spec_a = head;
	write(1, "ra\n", 3);
	return (spec_a);
}

void	ft_rb(t_push *spec_b)
{
	t_push *head;

	lst_add(&spec_b, spec_b->num);
	head = spec_b->next;
	free (spec_b);
	spec_b = head;
	write(1, "rb\n", 3);
}
