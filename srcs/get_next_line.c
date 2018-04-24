/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:40:55 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/23 03:29:54 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** This functions fetch a packet and return how many byte has been read.
*/

static ssize_t	ft_fetchpacket(int const fd, char **flux)
{
	ssize_t	byte_read;
	char	*packet;

	if (!(packet = ft_strnew(BUFF_SIZE)))
		return (-1);
	byte_read = read(fd, packet, BUFF_SIZE);
	if (!(*flux = ft_strjoinfree(*flux, packet)))
		return (-1);
	ft_strdel(&packet);
	return (byte_read);
}

/*
** Read from the t_gnl struct & handle the data.
** 1:	Find an '\n' in the node.save, if not found fetch a packet in loop.
** 10:	Populate line & sub the data taken in the node.
** 11:	Handle the return value.
*/

static int		get_next_line_from_node(t_gnl *node, char **line)
{
	ssize_t	read_byte;
	size_t	lenendl;
	size_t	len_save;
	char	*endl;

	read_byte = 1;
	while (!(endl = ft_strpbrk(SAVE, ENDL)) && read_byte > 0)
		read_byte = ft_fetchpacket(node->fd, &SAVE);
	len_save = ft_strlen(SAVE);
	lenendl = (endl == NULL) ? len_save : endl - SAVE;
	if (!(*line = ft_strndup(SAVE, lenendl)))
		return (-1);
	if (!(SAVE = ft_strsubfree(SAVE, lenendl + 1, len_save - lenendl)))
		return (-1);
	return (len_save > 0 || lenendl > 0 || read_byte > 0);
}

/*
** Hold the data list, handle errors.
*/

int				get_next_line(int const fd, char **line)
{
	static t_gnl	memory[MAX_FD + 1];
	char			errfd[1];
	int				ret;

	if (!(ft_btw(fd, 0, MAX_FD) && ft_btw(BUFF_SIZE, 0, MAX_BS)))
		return (-1);
	if (line == NULL || read(fd, errfd, 0) == -1)
		return (-1);
	if (memory[fd].save == NULL)
	{
		memory[fd].fd = fd;
		if (!(memory[fd].save = ft_strnew(0)))
			return (-1);
	}
	ret = get_next_line_from_node(&memory[fd], line);
	if (ret == 0)
		ft_strdel(&memory[fd].save);
	return (ret);
}
