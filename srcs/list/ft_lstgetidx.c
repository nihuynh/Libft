/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetidx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 01:56:00 by sklepper          #+#    #+#             */
/*   Updated: 2019/06/18 02:03:43 by sklepper         ###   ########.fr       */
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
		ft_error(__func__, __LINE__);
	return (n);
}
