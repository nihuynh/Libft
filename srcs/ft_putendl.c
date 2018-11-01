/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:17:58 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 10:17:58 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"
#include "ftstring.h"
#include <unistd.h>

void	ft_putendl(char const *s)
{
	if (s == NULL)
		return ;
	write(1, s, ft_strlen(s));
	ft_putchar('\n');
}
