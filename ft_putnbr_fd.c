/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:18:29 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 10:18:29 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int carrier;

	carrier = ft_abs(nb);
	if (nb < 0)
		ft_putchar_fd('-', fd);
	if (carrier >= 10)
		ft_putnbr_fd(carrier / 10, fd);
	ft_putchar_fd(48 + carrier % 10, fd);
}
