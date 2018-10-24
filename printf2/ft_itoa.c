/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:56:50 by sklepper          #+#    #+#             */
/*   Updated: 2018/09/27 15:14:52 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_count_nbr(int n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int		ft_nbchar(size_t i, int nbr)
{
	int				base;
	unsigned int	n;

	base = 10;
	if (nbr < 0)
		n = -nbr;
	else
		n = nbr;
	if (i == 1)
		base = 1;
	while (i > 2)
	{
		base *= 10;
		i--;
	}
	n = (n / base) % 10;
	return (n);
}

char			*ft_itoa(int n)
{
	size_t	size;
	char	*str;
	int		i;
	int		nbr;

	i = -1;
	size = 1;
	size += ft_count_nbr(n);
	if ((str = ft_strnew(size)) == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str[++i] = '-';
	while (--size != 0)
	{
		nbr = ft_nbchar(size, n);
		str[++i] = nbr + '0';
	}
	return (str);
}
