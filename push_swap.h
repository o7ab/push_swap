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
	char	*numbers;
	char	**split;
}		t_push;

int	ft_argcheck(int argc, char **argv, t_push *spec);
int	ft_check(t_push *spec);

#endif