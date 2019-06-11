/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoini.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:46:33 by sklepper          #+#    #+#             */
/*   Updated: 2019/06/11 15:57:15 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include "ftconvert.h"
#include <stdlib.h>

char	*ft_strjoini(const char *s1, int n)
{
	size_t	len;
	char	*res;
	char	*s2;

	if (s1 == NULL)
		return (NULL);
	if (!(s2 = ft_itoa(n)))
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(res = ft_strnew(len)))
		return (NULL);
	res = ft_strcat(ft_strcpy(res, s1), s2);
	free(s2);
	return (res);
}
