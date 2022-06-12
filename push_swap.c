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

int	ft_getarg(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return (0);
	while (split[i])
		i++;
	return (i);
}

void	lst_add(t_push **spec_a, int n)
{
	t_push	*new;
	t_push	*ptr;

	new = ((t_push *) malloc (sizeof(t_push)));
	new->num = n;
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

void	ft_convert(t_push **spec_a, char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		lst_add(spec_a, ft_atoi(split[i]));
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_push	*spec_a;
	t_push	*spec_b;
	int		args;
	char	**split;

	spec_a = NULL;
	if (argc < 2)
		ft_exit();
	split = ft_argcheck(argc, argv);
	if (!split)
		ft_exit();
	args = ft_getarg(split);
	ft_convert(&spec_a, split);
	spec_b = NULL;
	ft_algorithm(args, spec_a, spec_b);
}
