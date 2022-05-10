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

int	ft_check(char *str)
{
	int		i;
	char	**split;

	i = 0;
	split = ft_split(str, " ");
	if (!split)
		return (0);
	while (split[i] != '\0')
	{
		if (ft_atoi(split[i]) == 0)
			return (0);
		i++;
	}
}

int	ft_argcheck(int argc, char **argv, t_push *spec)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		ft_check(argv[1]);
	}
	spec->numbers = 0;
	while (i < argc)
	{
		spec->numbers = ft_strjoin(spec->numbers, argv[i]);
		spec->numbers = ft_strjoin(spec->numbers, " ");
		i++;
	}
	ft_check(spec->numbers);
	return (1);
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
