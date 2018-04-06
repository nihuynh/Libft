/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 08:13:58 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 08:13:58 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath.h"
#include "ftstring.h"

char	*ft_itoa_base(int value, int base)
{
	char			*res;
	char			*basestr;
	int				index;
	unsigned int	carry;

	basestr = "0123456789ABCDEF";
	index = (value < 0 && base == 10) ? 2 : 1;
	carry = (value > 0) ? value : -value;
	if (base < 2 || base > 16)
		return (NULL);
	while (carry /= base)
		index++;
	carry = (value > 0) ? value : -value;
	if (!(res = ft_strnew(index)))
		return (NULL);
	while (carry)
	{
		res[--index] = basestr[carry % base];
		carry /= base;
	}
	if (value < 0 && base == 10)
		res[0] = '-';
	else if (value == 0)
		res[0] = basestr[0];
	return (res);
}
