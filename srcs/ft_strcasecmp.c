/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:20:08 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 10:20:08 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcasecmp(char const *s1, char const *s2)
{
	size_t n;

	n = ft_min(ft_strlen(s1) + 1, ft_strlen(s2) + 1);
	return (ft_strncasecmp(s1, s2, n));
}
