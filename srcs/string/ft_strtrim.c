/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:32:18 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/02 21:47:11 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include "ftctype.h"

static size_t	ft_strlentrim(char const *str)
{
	size_t len;

	len = ft_strlen(str);
	str += len - 1;
	while (len && (ft_isblank(*str) || *str == '\n'))
	{
		str--;
		len--;
	}
	return (len);
}

char			*ft_strtrim(char const *str)
{
	size_t	len;
	char	*res;

	if (str == NULL)
		return (NULL);
	while (*str && (ft_isblank(*str) || *str == '\n'))
		str++;
	len = ft_strlentrim(str);
	if (!(res = ft_strnew(len)))
		return (NULL);
	ft_strlcpy(res, str, len + 1);
	return (res);
}
