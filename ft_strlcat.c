/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:22:21 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 10:22:21 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

size_t		ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	char	*pdst;
	size_t	lensrc;
	size_t	lendst;
	
	pdst = dst;
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (lendst >= size)
		return (lensrc + size);
	pdst += lendst;
	while (*src && size-- > 1 + lendst)
		*pdst++ = *src++;
	*pdst = '\0';
	return (lensrc + lendst);
}
