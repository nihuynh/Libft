/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftgnl.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 16:10:51 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/29 16:11:13 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTGNL_H
# define FTGNL_H
# include "libft.h"
# include <unistd.h>

# define BUFF_SIZE 1024
# define SAVE node->save
# define MAX_BS 10000000
# define MAX_FD 255

typedef struct	s_gnl
{
	char		*save;
	int			fd;
}				t_gnl;

int				ft_gnl(int const fd, char **line, char *endlsep);

#endif
