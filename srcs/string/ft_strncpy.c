/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:24:06 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/02 21:44:16 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"

char	*ft_strncpy(char *dst, char const *src, size_t n)
{
	char *pdst;

	pdst = dst;
	while (*src && n > 0)
	{
		*pdst++ = *src++;
		n--;
	}
	ft_bzero(pdst, n);
	return (dst);
}
