/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:50:45 by oabushar          #+#    #+#             */
/*   Updated: 2022/06/04 20:57:29 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(t_push *a, t_push *b)
{
	t_push temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sa(t_push *spec_a)
{
       ft_swap(spec_a, spec_a->next);
}

void	ft_sb(t_push *spec_a)
{
       ft_swap(spec_b, spec_b->next);
}

void    ft_ss(t_push *spec_a, t_push *spec_b)
{
    ft_swap(spec_b, spec_b->next);
    ft_swap(spec_b, spec_b->next);
}