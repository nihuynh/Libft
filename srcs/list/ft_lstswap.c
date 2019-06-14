/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 03:51:32 by sklepper          #+#    #+#             */
/*   Updated: 2019/06/14 05:50:16 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

void	ft_lstswap(t_list *root, t_list *to_swap1, t_list *to_swap2,
	t_list *next)
{
	root->next = to_swap2;
	to_swap2->next = to_swap1;
	to_swap1->next = next;
}

void	ft_lstswapfirst(t_list **root, t_list *to_swap1, t_list *to_swap2,
	t_list *next)
{
	*root = to_swap2;
	to_swap2->next = to_swap1;
	to_swap1->next = next;
}
