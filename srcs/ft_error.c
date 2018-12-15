/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 14:18:39 by nihuynh           #+#    #+#             */
/*   Updated: 2018/12/15 22:04:16 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"
#include <string.h>
#include <stdlib.h>
#include <sys/errno.h>

void	ft_error(const char function[], int line)
{
	ft_printf("Error during %s (at line : %d) => %s\n",\
			function, line, strerror(errno));
	exit(errno);
}
