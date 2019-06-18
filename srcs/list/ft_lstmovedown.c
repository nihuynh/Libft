/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmovedown.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 02:13:14 by sklepper          #+#    #+#             */
/*   Updated: 2019/06/18 02:18:10 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"
#include "ftio.h"

void	ft_lstmovedown(t_list **alst, t_list *to_move)
{
	t_list	*lst;
	t_list	*next;
	int		idx;
	int		len;

	lst = *alst;
	next = NULL;
	len = ft_lstlen(lst);
	idx = ft_lstgetidx(lst, to_move);
	if (idx == 0)
		ft_lstswapfirst(alst, lst, lst->next, lst->next->next);
	else if (idx != len)
	{
		lst = ft_lstat(lst, idx - 1);
		ft_lstswap(lst, lst->next, lst->next->next, lst->next->next->next);
	}
}
