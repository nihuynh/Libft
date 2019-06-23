/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetidx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 01:56:00 by sklepper          #+#    #+#             */
/*   Updated: 2019/06/23 22:48:59 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"
#include "ftio.h"

int		ft_lstgetidx(t_list *lst, t_list *to_get)
{
	int n;

	n = 0;
	while (lst != to_get && lst && lst->next)
	{
		lst = lst->next;
		n++;
	}
	if (lst != to_get)
		return (-1);
	return (n);
}
