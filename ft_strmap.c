/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:23:08 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 10:23:08 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strmap(char const *s, char(*f)(char))
{
	size_t len;
	char *res;

	if (!f || !s)
		return (NULL);
	len = ft_strlen(s);
	if(!(res = ft_strnew(len)))
		return (NULL);
	while (*s)
		*res++ = f(*s++);
	res -= len;
	return (res);
}
