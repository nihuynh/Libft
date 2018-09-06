/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 15:22:20 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/29 15:22:58 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_tabdel(char ***tab)
{
	int len;

	len = ft_tablen(*tab);
	while (len-- > 0)
	{
		ft_putstr("DO STUFF");
	}
	free(*tab);
	tab = NULL;
}
