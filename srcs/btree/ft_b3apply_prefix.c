/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3apply_prefix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 15:10:39 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/16 15:26:36 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbtree.h"

void	ft_b3apply_prefix(t_btree *root, void (*applyf)(void *, size_t c_s))
{
	if (root == NULL)
		return ;
	applyf(root->content, root->content_size);
	if (root->left != NULL)
		ft_b3apply_prefix(root->left, applyf);
	if (root->right != NULL)
		ft_b3apply_prefix(root->right, applyf);
}
