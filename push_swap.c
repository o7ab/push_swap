/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:55:40 by oabushar          #+#    #+#             */
/*   Updated: 2022/05/09 20:39:00 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_argcheck(int argc, char **argv, t_push *spec)
{
	int i;

	i = 0;
	spec->numbers = 0;
	while (i < argc)
	{
		
	}
}

int main(int argc, char **argv)
{
	t_push spec;

	if (argc < 2)
	{
		printf("Invalid number of arguments\n");
		return (0);
	}
	if (ft_argcheck(argc, argv, &spec) == 0)
	{
		printf("Invalid arguments \n");
		return (0);
	}
}
