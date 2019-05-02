/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:22:49 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/02 21:41:13 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftconvert.h"

char	*ft_strlowcase(char *str)
{
	char *pstr;

	pstr = str;
	while (*pstr)
	{
		*pstr = (char)ft_tolower(*pstr);
		pstr++;
	}
	return (str);
}
