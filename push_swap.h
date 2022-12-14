/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:33:59 by oabushar          #+#    #+#             */
/*   Updated: 2022/05/09 20:27:17 by oabushar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_push
{
	struct s_push	*next;
	int				num;
	int				index;
}		t_push;

char	**ft_argcheck(int argc, char **argv);
int		ft_check(char **split, char *numbers);
void	ft_sa(t_push *spec_a);
void	ft_swap(t_push *a, t_push *b);
void	ft_algorithm(int args, t_push *spec_a, t_push *spec_b);
void	lst_add(t_push **spec_a, int n);
void	ft_pb(t_push **spec_a, t_push **spec_b);
void	ft_ra(t_push **spec_a);
void	ft_pa(t_push **spec_a, t_push **spec_b);
void	ft_exit(void);
void	ft_rra(t_push **spec_a);
void	ft_add_front(t_push **lst, t_push *new);
void	ft_3(t_push **spec_a);
void	ft_4(t_push **spec_a, t_push **spec_b);
void	ft_5(t_push **spec_a, t_push **spec_b);
t_push	*get_last_list(t_push *spec_a);
void	ft_swap_num(int *a, int *b);
void	ft_get_index(t_push *spec_a, int args);
void	ft_rb(t_push **spec_b);
void	ft_rrb(t_push **spec_b);
void	ft_sort_huge(t_push **spec_a, t_push **spec_b, int args);
void	ft_sort_big(t_push **spec_a, t_push **spec_b, int args);
int		find_biggest(t_push *spec_b, int args, int i);
int		getarg(t_push *spec_b);
int		find_biggest(t_push *spec_b, int args, int i);
int		ft_get_biggest(t_push *spec_b, int i);
void	ft_free_split(char **split);

#endif