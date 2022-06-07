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

void	ft_algorithm(int args, t_push *spec_a, t_push *spec_b)
{
	(void) spec_b;

	if (args == 2)
		ft_sa(spec_a);
	if (args == 3)
		ft_3(&spec_a);
	if (args == 4)
		ft_4(&spec_a, &spec_b);
	if (args == 5)
		ft_5(&spec_a, &spec_b);
}