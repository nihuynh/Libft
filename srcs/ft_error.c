/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 14:18:39 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/30 14:52:42 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"
#include <string.h>
#include <stdlib.h>
#include <sys/errno.h>

void	ft_error(const char function[], int line)
{
	ft_putstr("Error during ");
	ft_putstr(function);
	ft_print_value(" (at line : ", line);
	ft_putstr(") => ");
	ft_putendl_fd(strerror(errno), 2);
	exit(errno);
}
