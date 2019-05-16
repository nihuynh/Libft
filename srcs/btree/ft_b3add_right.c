/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3add_right.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 14:42:10 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/16 18:23:57 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ftbtree.h"

void	ft_b3add_right(t_btree *parent_node, t_btree *new)
{
	if (new)
		parent_node->right = new;
}
