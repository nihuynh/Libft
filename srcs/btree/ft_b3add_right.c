/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3add_right.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 14:42:10 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/20 13:23:58 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbtree.h"

void	ft_b3add_right(t_btree *parent_node, t_btree *new)
{
	if (new)
		parent_node->right = new;
}
