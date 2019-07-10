/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 08:09:40 by nihuynh           #+#    #+#             */
/*   Updated: 2019/07/11 01:11:31 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"

static inline t_byte
	*ft_bzero_long(void *str, size_t n)
{
	long	*pstr;
	long	val;
	size_t	n_long;

	n_long = n >> 3;
	pstr = (long*)str;
	val = 0;
	while (n_long % 4)
	{
		*pstr++ = val;
		n_long--;
	}
	n_long >>= 2;
	while (n_long--)
	{
		pstr[0] = val;
		pstr[1] = val;
		pstr[2] = val;
		pstr[3] = val;
		pstr = &pstr[4];
	}
	return ((t_byte*)pstr);
}

void
	ft_bzero(void *str, size_t n)
{
	t_byte			*pstr;
	register t_byte	val;

	pstr = ft_bzero_long(str, n);
	n = n % 8;
	val = 0;
	while (n % 4)
	{
		*pstr++ = val;
		n--;
	}
	n >>= 2;
	while (n--)
	{
		pstr[0] = val;
		pstr[1] = val;
		pstr[2] = val;
		pstr[3] = val;
		pstr = &pstr[4];
	}
}
