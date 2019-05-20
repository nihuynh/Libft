/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3add_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 14:29:54 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/20 13:23:39 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbtree.h"

void	ft_b3add_left(t_btree *parent_node, t_btree *new)
{
	if (new)
		parent_node->left = new;
}
