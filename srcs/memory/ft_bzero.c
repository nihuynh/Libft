/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 08:09:40 by nihuynh           #+#    #+#             */
/*   Updated: 2019/07/21 19:24:34 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"
#include <stdint.h>

static inline t_byte
	*ft_bzero_long(void *str, size_t n)
{
	unsigned long	*pstr;
	unsigned long	val;
	size_t			n_long;

	n_long = n >> 3UL;
	pstr = (unsigned long*)str;
	val = 0UL;
	while (n_long & 0x3UL)
	{
		*pstr++ = val;
		n_long--;
	}
	n_long >>= 2UL;
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

	val = 0;
	pstr = (t_byte*)str;
	if (n >= 8)
	{
		while ((uintptr_t)pstr & 0x7UL && n--)
			*pstr++ = val;
		pstr = ft_bzero_long(pstr, n);
	}
	n = n & 0x7UL;
	while (n-- > 0)
		*pstr++ = val;
}
