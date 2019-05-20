/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3del.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:20:03 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/20 13:24:12 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbtree.h"

inline static void
	ft_b3map_suffix(t_btree *root, void (*del)(t_btree *))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
		ft_b3map_suffix(root->left, del);
	if (root->right != NULL)
		ft_b3map_suffix(root->right, del);
	del(root);
}

void
	ft_b3del(t_btree **root, void (*del)(t_btree *))
{
	ft_b3map_suffix(*root, del);
	root = NULL;
}
