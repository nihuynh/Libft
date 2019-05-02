/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:31:58 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/02 21:46:33 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include "ftmem.h"

char	*ft_strstr(char const *str, char const *to_find)
{
	size_t len;

	if (!(len = ft_strlen(to_find)))
		return ((char*)str);
	while (*str)
	{
		if (*str == *to_find && !(ft_memcmp(str, to_find, len)))
			return ((char*)str);
		str++;
	}
	return (NULL);
}
