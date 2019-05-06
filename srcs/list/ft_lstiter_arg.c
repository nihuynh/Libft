/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 17:16:06 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/06 17:16:58 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

void	ft_lstiter_arg(int arg, t_list *lst, void (*f)(int arg, t_list *elem))
{
	while (lst)
	{
		f(arg, lst);
		lst = lst->next;
	}
}
