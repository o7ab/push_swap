/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:56:04 by oabushar          #+#    #+#             */
/*   Updated: 2022/06/12 04:34:23 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_add_index(t_push **spec_a, int n, int index)
{
	t_push *new;
	t_push *ptr;

	new = ((t_push *) malloc (sizeof(t_push)));
	new->num = n;
	new->index = index;
	new->next = NULL;
	if (!(*spec_a))
		*spec_a = new;
	else
	{
		ptr = *spec_a;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
}

// void	ft_ra(t_push **spec_a)
// {
// 	t_push *ptr;
//     t_push *copy;
//     ptr = *spec_a;
//     copy = (*spec_a)->next;
//     while ((*spec_a)->next)
//         *spec_a = (*spec_a)->next;
//     (*spec_a)->next = ptr;
//     ptr->next = NULL;
//     *spec_a = copy;
// 	write(1, "ra\n", 4);
// }

// void	ft_rb(t_push **spec_b)
// {
// 	t_push *ptr;
//     t_push *copy;
	
//     ptr = *spec_b;
//     copy = (*spec_b)->next;
//     while ((*spec_b)->next)
//         *spec_b = (*spec_b)->next;
//     (*spec_b)->next = ptr;
//     ptr->next = NULL;
//     *spec_b = copy;
//     write(1, "rb\n", 3);
// }

void	ft_ra(t_push **spec_a)
{
	t_push *head;

	lst_add_index(spec_a, (*spec_a)->num, (*spec_a)->index);
	head = (*spec_a)->next;
	free (*spec_a);
	*spec_a = head;
	write(1, "ra\n", 3);
}

void	ft_rb(t_push **spec_b)
{
	t_push *head;

	lst_add_index(spec_b, (*spec_b)->num, (*spec_b)->index);
	head = (*spec_b)->next;
	free (*spec_b);
	*spec_b = head;
	write(1, "rb\n", 3);
}
