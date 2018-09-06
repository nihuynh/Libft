/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:19:57 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/03 16:18:12 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_caprule(char c)
{
	return (ft_btw(c, 31, 47) || ft_btw(c, 58, 64) || ft_isspace(c));
}

char		*ft_strcapitalize(char *str)
{
	char *pstr;

	pstr = ft_strlowcase(str);
	if (*pstr)
	{
		*pstr = (char)ft_toupper(*pstr);
		pstr++;
	}
	while (*pstr)
	{
		if (ft_caprule(*(pstr - 1)))
			*pstr = (char)ft_toupper(*pstr);
		pstr++;
	}
	return (str);
}
