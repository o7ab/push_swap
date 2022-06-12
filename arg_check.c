/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:46:33 by oabushar          #+#    #+#             */
/*   Updated: 2022/06/12 22:57:32 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort(char **split)
{
	int	i;
	int	j;

	i = 0;
	while (split[i])
	{
		j = i + 1;
		while (split[j])
		{
			if (ft_atoi(split[i]) == ft_atoi(split[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_order(char **split)
{
	int	i;
	int	j;

	i = 0;
	while (split[i])
	{
		j = i + 1;
		while (split[j])
		{
			if (ft_atoi(split[i]) > ft_atoi(split[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_add_front(t_push **lst, t_push *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

int	ft_check(char **split, char *numbers)
{
	if (!numbers)
		return (0);
	if (!ft_order(split))
		exit(1);
	if (ft_sort(split) == 1)
		return (0);
	free (numbers);
	return (1);
}

char	**ft_argcheck(int argc, char **argv)
{
	int		i;
	char	*numbers;
	char	**split;

	i = 1;
	numbers = malloc (1 * sizeof (char));
	while (i < argc)
	{
		numbers = ft_strjoin(numbers, argv[i]);
		numbers = ft_strjoin(numbers, " ");
		i++;
	}
	split = ft_split(numbers, ' ');
	if (!split)
	{
		free (numbers);
		ft_exit();
	}
	if (ft_check(split, numbers) == 0)
		ft_exit();
	return (split);
}
