/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetelt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 16:30:39 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/07 21:00:23 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

t_list
	*ft_lstgetelt_2(t_list *alst, int (*cmp)(void *c, void *k), void *key)
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

void
	*ft_lstgetelt(t_list *alst, int (*cmp)(void *c, void *k), void *key)
{
	void *content;

	while (alst)
	{
		content = alst->content;
		if (cmp(content, key))
			return (content);
		alst = alst->next;
	}
	return (NULL);
}
