/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:55:02 by oabushar          #+#    #+#             */
/*   Updated: 2022/06/11 21:18:05 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *get_arr(t_push *spec_a, int args)
{
	int i;
	int *arr;

	i = 0;
	arr = malloc (sizeof(int) * args);
	if (!arr)
		return (NULL);
	while (spec_a)
	{
		arr[i] = spec_a->num;
		spec_a = spec_a->next;
		i++;
	}
	return (arr);
}

void    get_index(t_push *spec_a, int *arr)
{
	int	j;

	j = 0;
	while (spec_a)
	{
		j = 0;
		while (arr[j] != spec_a->num)
			j++;
		if (spec_a->num == arr[j])
		{
			spec_a->index = j;
			spec_a = spec_a->next;
		}
	}
}

int	*sort_arr(int *arr, int args)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (i < args)
	{
		while (j < args - 1)
		{
			if (arr[j] > arr[j + 1])
				ft_swap_num(&arr[j], &arr[j + 1]);
			j++;
		}
		j = 0;
		i++;
	}
	return (arr);
}

void    ft_get_index(t_push *spec_a, int args)
{
	int *arr;

	arr = get_arr(spec_a, args);
	arr = sort_arr(arr, args);
	get_index(spec_a, arr);
	free (arr);
}