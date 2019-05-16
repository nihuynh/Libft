/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_btree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 15:33:21 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/16 16:34:03 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ftbtree.h"
#include <stdlib.h>
#include <stdio.h>

void print_int(void *data, size_t c_s)
{
	int *content;

	(void)c_s;
	content = data;
	printf("%d ", *content);
}

void free_node(t_btree *node)
{
	free(node->content);
	free(node);
}

t_btree	*init(void)
{
	t_btree *root;
	t_btree *node;
	int		*data;
	int		stuff;

	data =	&stuff;
	stuff = 6;
	root = ft_b3new(data, sizeof(int));
	stuff = 4;
	node = ft_b3new(data, sizeof(int));
	ft_b3add_left(root, node);
	stuff = 8;
	node = ft_b3new(data, sizeof(int));
	ft_b3add_right(root, node);
	stuff = 3;
	node = ft_b3new(data, sizeof(int));
	ft_b3add_left(root->left, node);
	stuff = 5;
	node = ft_b3new(data, sizeof(int));
	ft_b3add_right(root->left, node);
	stuff = 7;
	node = ft_b3new(data, sizeof(int));
	ft_b3add_left(root->right, node);
	stuff = 9;
	node = ft_b3new(data, sizeof(int));
	ft_b3add_right(root->right, node);
	return (root);
}

void	test1(t_btree *root)
{
	printf("\nInfix : ");
	ft_b3apply_infix(root, &print_int);
	printf("\nPrefix : ");
	ft_b3apply_prefix(root, &print_int);
	printf("\nSuffix : ");
	ft_b3apply_suffix(root, &print_int);
	printf("\n");
}

void	clean_up(t_btree **root)
{
	ft_b3del(root, free_node);
}

int		ut_btree(void)
{
	t_btree *root;

	root = init();
	test1(root);
	clean_up(&root);
	return (0);
}

int		main(void)
{
	ut_btree();
	while (1)
		;
	return (0);
}
