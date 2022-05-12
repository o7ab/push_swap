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
			if (ft_atoi(spec->split[i]) == ft_atoi(spec->split[j])
				|| (ft_atoi(spec->split[i]) == ft_atoi(spec->split[j])))
					return (2);
			j++;
		}
		i++;
	}
	return (1);
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
	return (1);
}

int	ft_argcheck(int argc, char **argv, t_push *spec)
{
	int i;

	i = 1;
	if (argc == 2)
	{
		ft_check(spec);
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
<<<<<<< HEAD
	if (ft_order(spec) == 1)
=======
	if (ft_order(spec))
>>>>>>> 114a729494262f690ea3e64ab6762164f4f34115
	{
		printf("shits in order\n");
		return (0);
	}
<<<<<<< HEAD
	if (ft_order(spec) == 2)
	{
		printf("there is a duplicate\n");
		return (0);
	}
=======
>>>>>>> 114a729494262f690ea3e64ab6762164f4f34115
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
	printf("shit worked \n");
}
