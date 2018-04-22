/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 03:21:54 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/22 03:23:35 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"

char	*ft_strjoinfree(char const *s1, char const *s2)
{
	char *res;

	res = ft_strjoin(s1, s2);
	ft_strdel((char**)&s1);
	return (res);
}
