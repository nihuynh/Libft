/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3apply_infix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 15:12:03 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/16 15:25:31 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbtree.h"

void	ft_b3apply_infix(t_btree *root, void (*applyf)(void *, size_t c_s))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
		ft_b3apply_infix(root->left, applyf);
	applyf(root->content, root->content_size);
	if (root->right != NULL)
		ft_b3apply_infix(root->right, applyf);
}
