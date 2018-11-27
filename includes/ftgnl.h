/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftgnl.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 16:10:51 by nihuynh           #+#    #+#             */
/*   Updated: 2018/11/27 05:29:17 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTGNL_H
# define FTGNL_H

# define BUFF_SIZE 512
# define SAVE node->save
# define MAX_BS 10000000
# define MAX_FD 64

typedef struct	s_gnl
{
	char		*save;
	int			fd;
}				t_gnl;

#endif
