/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:30:37 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/02 21:38:41 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath.h"
#include "ftstring.h"
#include "ftmem.h"

char	*ft_strndup(char const *src, size_t n)
{
	char	*res;
	size_t	size;

	size = ft_min(ft_strlen(src), n);
	if (!(res = ft_strnew(size)))
		return (NULL);
	ft_memcpy(res, src, size);
	return (res);
}
