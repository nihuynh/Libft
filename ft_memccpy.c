/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:16:02 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 10:16:02 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,  size_t n)
{
	t_byte	*pdst;
	t_byte	*psrc;

	pdst = (t_byte*)dst;
	psrc = (t_byte*)src;
	while(n--)
	{
		*pdst++ = *psrc++;
		if (*(pdst - 1) == (t_byte)c)
			return ((void *)pdst);
	}
	return (NULL);
}
