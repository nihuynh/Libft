/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:20:49 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 10:20:49 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

size_t	ft_strclen(const char *str, char c)
{
	size_t len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}
