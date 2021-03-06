/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:34:50 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/22 17:19:27 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "ftconvert.h"
# include "ftctype.h"
# include "ftio.h"
# include "ftlist.h"
# include "ftmath.h"
# include "ftmem.h"
# include "ftstring.h"
# include "ftbtree.h"

long	ft_curr_usec(void);
int		ft_line_count(char *filename);
void	ft_swap(int *a, int *b);
void	ft_swapf(float *a, float *b);
int		ft_tablen(char **tab);
void	ft_tabdel(char **tab);

#endif
