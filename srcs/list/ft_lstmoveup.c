/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmoveup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 01:49:01 by sklepper          #+#    #+#             */
/*   Updated: 2019/06/18 02:13:41 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"
#include "ftio.h"

void	ft_lstmoveup(t_list **alst, t_list *to_move)
{
	t_list	*lst;
	t_list	*next;
	int		idx;

	lst = *alst;
	next = NULL;
	idx = ft_lstgetidx(lst, to_move);
	if (idx == 0)
		return ;
	else if (idx == 1)
		ft_lstswapfirst(alst, lst, lst->next, lst->next->next);
	else
	{
		lst = ft_lstat(lst, idx - 2);
		ft_lstswap(lst, lst->next, lst->next->next, lst->next->next->next);
	}
}
