/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 03:25:23 by sklepper          #+#    #+#             */
/*   Updated: 2019/06/14 05:30:09 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

void	ft_lstsort(t_list **alst, int (*cmp_res)(void *res1, void *res2))
{
	t_list	*lst;

	lst = *alst;
	while (lst->next)
	{
		if (cmp_res(lst->content, lst->next->content) > 0)
		{
			ft_lstswapfirst(alst, lst, lst->next, lst->next->next);
			lst = *alst;
		}
		else if (lst->next->next)
		{
			if (cmp_res(lst->next->content, lst->next->next->content) > 0)
			{
				ft_lstswap(lst, lst->next, lst->next->next,
					lst->next->next->next);
				lst = *alst;
			}
			else
				lst = lst->next;
		}
		else
			lst = lst->next;
	}
}
