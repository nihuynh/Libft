/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_alloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:42:16 by sklepper          #+#    #+#             */
/*   Updated: 2018/11/26 17:48:06 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmem.h"
#include "ft_printf.h"
#include <stdlib.h>

void	*ft_safe_alloc(size_t size)
{
	void *res;

	res = malloc(sizeof(size));
	if (res == NULL)
	{
		ft_printf("Malloc Error");
		exit (0);
	}
	ft_bzero(res, size);
	return (res);
}