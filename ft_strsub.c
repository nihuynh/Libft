/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:32:07 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 10:32:07 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *res;

	if (!(res = ft_strnew(len)))
		return (NULL);
	if (s == NULL)
		return (NULL);
	s += start;
	return (ft_strncpy(res, s, len));
}
