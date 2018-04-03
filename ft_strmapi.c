/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:23:16 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/03 16:28:30 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f) (unsigned int, char))
{
	size_t			len;
	char			*res;
	unsigned int	index;

	if (!f || !str)
		return (NULL);
	len = ft_strlen(str);
	if (!(res = ft_strnew(len)))
		return (NULL);
	index = 0;
	while (*str)
		*res++ = f(index++, *str++);
	res -= len;
	return (res);
}
