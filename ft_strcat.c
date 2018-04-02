/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:20:30 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 10:20:30 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dst,const char *src)
{
	char *pdst;

	pdst = dst;
	while (*pdst)
		pdst++;
	while (*src)
		*pdst++ = *src++;
	*pdst = '\0';
	return (dst);
}
