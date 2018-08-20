/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:21:59 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/03 16:20:28 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int index;

	if (!f || !s)
		return ;
	index = 0;
	while (*s)
		f(index++, s++);
}
