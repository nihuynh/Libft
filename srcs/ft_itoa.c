/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 08:13:30 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 08:13:30 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"

char	*ft_itoa(int value)
{
	char			*res;
	int				index;
	unsigned int	carry;

	carry = (value > 0) ? value : -value;
	index = (value < 0) ? 2 : 1;
	while (carry /= 10)
		index++;
	carry = (value > 0) ? value : -value;
	if (!(res = ft_strnew(index)))
		return (NULL);
	res[0] = (value < 0) ? '-' : '0';
	while (carry)
	{
		res[--index] = carry % 10 + 48;
		carry /= 10;
	}
	return (res);
}
