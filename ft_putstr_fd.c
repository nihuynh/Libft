/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:18:53 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 10:18:53 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	if (str == NULL)
		return ;
	while (*str)
		ft_putchar_fd(*str++, fd);
}
