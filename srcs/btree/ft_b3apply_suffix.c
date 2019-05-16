/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3apply_suffix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 15:11:47 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/16 15:26:23 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbtree.h"

void	ft_b3apply_suffix(t_btree *root, void (*applyf)(void *, size_t c_s))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
		ft_b3apply_suffix(root->left, applyf);
	if (root->right != NULL)
		ft_b3apply_suffix(root->right, applyf);
	applyf(root->content, root->content_size);
}
