/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:23:56 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/02 21:43:10 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath.h"
#include "ftstring.h"
#include "ftmem.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t len;

	len = ft_min(ft_strlen(s1) + 1, ft_strlen(s2) + 1);
	len = ft_min(len, n);
	return (ft_memcmp(s1, s2, len));
}
