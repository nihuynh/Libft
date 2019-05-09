/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:02:35 by sklepper          #+#    #+#             */
/*   Updated: 2019/05/09 17:03:00 by sklepper         ###   ########.fr       */
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
