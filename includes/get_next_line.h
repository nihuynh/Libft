/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:41:17 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/23 01:26:09 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft.h"
# include <unistd.h>

# define BUFF_SIZE 1024
# define SAVE node->save
# define MAX_BS 10000000
# define MAX_FD 10240
# define ENDL "\n"

typedef struct	s_gnl
{
	char		*save;
	int			fd;
}				t_gnl;

int				get_next_line(int const fd, char **line);

#endif
