/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:08:50 by nihuynh           #+#    #+#             */
/*   Updated: 2019/04/30 15:10:15 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

void	ft_lstiteri(t_list *lst, void (*f)(t_list *elem, int idx))
{
	int idx;

	idx = 0;
	while (lst)
	{
		f(lst, idx);
		lst = lst->next;
		idx++;
	}
}
