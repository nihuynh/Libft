/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:24:06 by nihuynh           #+#    #+#             */
/*   Updated: 2019/07/09 11:47:03 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"

char	*ft_strncpy(char *dst, char const *src, size_t n)
{
	char *pdst;

	pdst = dst;
	while (n > 0 && *src)
	{
		*pdst++ = *src++;
		n--;
	}
	if (n > 0)
		ft_bzero(pdst, n);
	return (dst);
}
