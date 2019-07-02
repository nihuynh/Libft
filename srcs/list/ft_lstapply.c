/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstapply.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 22:35:09 by nihuynh           #+#    #+#             */
/*   Updated: 2019/07/02 22:36:29 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

void	ft_lstapply(t_list *lst, void (*f)(void *content))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
