/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 15:16:38 by nihuynh           #+#    #+#             */
/*   Updated: 2018/11/28 00:40:43 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_tabdel(char **greed)
{
	int i;

	i = -1;
	if (greed == NULL)
		return ;
	while (greed[++i])
		free(greed[i]);
	free(greed);
}
