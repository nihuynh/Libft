/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:23:39 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 10:23:39 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	int				res;

	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	res = 0;
	while (n-- && !res)
		res = ft_tolower(*ps1++) - ft_tolower(*ps2++);
	return (res);
}
