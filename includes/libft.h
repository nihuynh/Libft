/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:34:50 by nihuynh           #+#    #+#             */
/*   Updated: 2018/11/13 17:22:05 by nihuynh          ###   ########.fr       */
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

int		ft_tablen(char **tab);
void	ft_swap(int *a, int *b);
int		ft_gnl(int const fd, char **line, char *endlsep);

#endif
