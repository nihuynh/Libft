/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 15:33:21 by nihuynh           #+#    #+#             */
/*   Updated: 2019/03/19 15:39:16 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftgnl.h"
#include "ftstring.h"
#include "ftio.h"
#include <fcntl.h>
#include <unistd.h>


int	ft_line_count(char *filename)
{
	int		fd;
	char	*line;
	int		line_count;

	line_count = 0;
	if ((fd = open(filename, O_RDONLY)) == -1)
		ft_error(__func__, __LINE__);
	while (ft_gnl(fd, &line, "\n") > 0)
	{
		line_count++;
		ft_strdel(&line);
	}
	close(fd);
	return (line_count);
}
