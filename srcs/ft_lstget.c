/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 03:21:07 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/22 03:21:09 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

t_list	*ft_lstget(t_list *alst, int (*cmp)(void *elem_content))
{
	void *content;

	while (alst)
	{
		content = alst->content;
		if (cmp(content))
			return (alst);
		alst = alst->next;
	}
	return (NULL);
}
