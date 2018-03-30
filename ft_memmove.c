/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:16:58 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 10:16:58 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst == NULL || src == NULL)
		return (NULL);
	if (n == 0 || dst == src)
		return (dst);
	if (src > dst)
		ft_memcpy(dst, src, n);
	else
		ft_memrcpy(dst, src, n);
	return (dst);
}
