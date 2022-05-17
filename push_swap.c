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

int	ft_sort(t_push *spec)
{
	int i;
	int j;

	i = 0;
	while (spec->split[i])
	{
		j = i + 1;
		while (spec->split[j])
		{
			if (ft_atoi(spec->split[i]) == ft_atoi(spec->split[j]))
					return (1);
			j++;
		}
		i++;
	} 
	return (0);
}

int	ft_order(t_push *spec)
{
	int i;
	int j;

	i = 0;
	while (spec->split[i])
	{
		j = i + 1;
		while (spec->split[j])
		{
			if (ft_atoi(spec->split[i]) > ft_atoi(spec->split[j]))
					return (1);
			j++;
		}
		i++;
	} 
	return (0);
}

int	ft_check(t_push *spec)
{
	int		i;

	i = 0;
	if (!spec->numbers)
		return (0);
	spec->split = ft_split(spec->numbers, ' ');
	if (!spec->split)
	{
		free (spec->numbers);
		return (0); 
	}
	while (spec->split[i] != 0)
	{
		if (ft_atoi(spec->split[i]) == 0)
			return (0);
		i++;
	}
	free (spec->numbers);
	if (!ft_order(spec))
		return (0);
	if (ft_sort(spec) == 1)
		return (0);
	return (1);
}

int	ft_argcheck(int argc, char **argv, t_push *spec)
{
	int i;

	i = 1;
	if (argc == 2)
	{
		return (ft_check(spec));
	}
	spec->numbers = malloc (1 * sizeof (char));
	while (i < argc)
	{
		spec->numbers = ft_strjoin(spec->numbers, argv[i]);
		spec->numbers = ft_strjoin(spec->numbers, " ");
		i++;
	}
	if (ft_check(spec) == 0)
		return (0);
	return (1);
}

int	ft_getarg(t_push *spec)
{
	int i;

	i = 0;
	if (!spec->split)
		return (0);
	while (spec->split[i])
		i++;
	return (i);
}

void	ft_convert(t_push *spec)
{
	int i;

	i = 0;
	spec->args = ft_getarg(spec);
	spec->a = malloc (sizeof (int) * spec->args);
	while (spec->split[i])
	{
		spec->a[i] = ft_atoi(spec->split[i]);
		i++;
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
		write (2, "Error \n", 8);
		return (0);
	}
	ft_convert(&spec);
	printf("shit worked \n");
}
