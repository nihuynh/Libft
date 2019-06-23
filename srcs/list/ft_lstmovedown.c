/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmovedown.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 02:13:14 by sklepper          #+#    #+#             */
/*   Updated: 2019/06/23 22:50:48 by nihuynh          ###   ########.fr       */
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
	if (idx == -1)
		return ;
	if (idx == 0 && lst->next)
		ft_lstswapfirst(alst, lst, lst->next, lst->next->next);
	else if (idx < len - 1)
	{
		lst = ft_lstat(lst, idx - 1);
		ft_lstswap(lst, lst->next, lst->next->next, lst->next->next->next);
	}
}
