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
	struct s_push *head;
}		t_push;

char	**ft_argcheck(int argc, char **argv);
int		ft_check(char **split, char *numbers);
void	ft_sa(t_push *spec);
void	ft_swap(int *a, int *b);
void	ft_exit(void);

#endif