/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:02:35 by sklepper          #+#    #+#             */
/*   Updated: 2019/06/10 23:24:00 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

t_list
	*ft_lstgetnode(t_list *alst, int (*cmp)(void *c, void *k), void *key)
{
	void *content;

	while (alst)
	{
		content = alst->content;
		if (cmp(content, key))
			return (alst);
		alst = alst->next;
	}
	return (NULL);
}

t_list
	*ft_lstgetnode_by_content_ptr(t_list *alst, void *key)
{
	void *content;

	while (alst)
	{
		content = alst->content;
		if (content == key)
			return (alst);
		alst = alst->next;
	}
	return (NULL);
}
