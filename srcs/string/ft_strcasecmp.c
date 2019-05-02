/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:20:08 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/02 21:48:59 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftconvert.h"
#include "ftmem.h"

int	ft_strcasecmp(char const *s1, char const *s2)
{
	t_byte	*ps1;
	t_byte	*ps2;
	int		res;

	ps1 = (t_byte*)s1;
	ps2 = (t_byte*)s2;
	res = 0;
	while (!res && (*ps1 || *ps2))
		res = ft_tolower(*ps1++) - ft_tolower(*ps2++);
	return (res);
}
