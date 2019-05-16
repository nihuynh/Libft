/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3add_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 14:29:54 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/16 14:59:21 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ftbtree.h"

void	ft_b3add_left(t_btree *parent_node, t_btree *new)
{
	if (new)
	{
		new->parent = parent_node;
		parent_node->left = new;
	}
}
