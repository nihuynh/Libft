/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:51:32 by sklepper          #+#    #+#             */
/*   Updated: 2019/06/08 14:07:35 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"
#include "ftio.h"

t_list	*ft_lstpop(t_list *lst, t_list *to_del, void(*f)(void*, size_t))
{
	t_list	*ptr;

	ptr = lst;
	if (ptr == to_del)
	{
		lst = to_del->next;
		ft_lstdelone(&to_del, f);
	}
	else
	{
		while (ptr->next != to_del && ptr->next != NULL)
			ptr = ptr->next;
		if (ptr->next != to_del)
			ft_error(__func__, __LINE__);
		ptr->next = to_del->next;
		ft_lstdelone(&to_del, f);
	}
	return (lst);
}
