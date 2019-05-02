/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:30:58 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/02 21:45:17 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftmem.h"

char	*ft_strnew(size_t size)
{
	char *mem;

	if (!(mem = (char*)malloc(size + 1)))
		return (NULL);
	ft_bzero(mem, size + 1);
	return (mem);
}
