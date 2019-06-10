/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 15:18:39 by nihuynh           #+#    #+#             */
/*   Updated: 2019/06/10 05:41:06 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"
#include "ftconvert.h"
#include "ftctype.h"

int			ft_atoi_base(const char *str, int base)
{
	char	*basestr;
	char	*indx;
	int		res;
	int		neg;

	res = 0;
	basestr = "0123456789ABCDEF";
	if (base < 2 || base > 16 || !*str)
		return (0);
	while (*str && (ft_isspace(*str)))
		str++;
	neg = (*str == 45) ? 1 : -1;
	if (*str == 43 || *str == 45)
		str++;
	while (*str && (indx = ft_memchr(basestr, ft_toupper(*str), base)) != NULL)
	{
		res = res * base - (indx - basestr);
		str++;
	}
	return (res * neg);
}
