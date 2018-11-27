/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_safe_alloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:42:16 by sklepper          #+#    #+#             */
/*   Updated: 2018/11/27 06:53:40 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"
#include "ftio.h"
#include <stdlib.h>

void	*ft_safe_alloc(size_t size)
{
	void *res;

	if (!(res = malloc(sizeof(size))))
	{
		ft_putendl("Malloc Error");
		exit (0);
	}
	ft_bzero(res, size);
	return (res);
}
