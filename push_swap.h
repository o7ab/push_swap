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

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_push
{
	struct s_push *next;
	int		num;
}		t_push;

char	**ft_argcheck(int argc, char **argv);
int		ft_check(char **split, char *numbers);
void	ft_sa(t_push *spec_a);
void	ft_swap(t_push *a, t_push *b);
void	ft_algorithm(int args, t_push *spec_a, t_push *spec_b);
void	lst_add(t_push **spec_a, int n);
void	ft_pb(t_push **spec_a, t_push **spec_b);
void	ft_ra(t_push *spec_a);
void	ft_pa(t_push **spec_a, t_push **spec_b);
void	ft_exit(void);
void	ft_3(t_push *spec_a);
void	ft_rra(t_push **spec_a);
void	ft_add_front(t_push **lst, t_push *new);


#endif