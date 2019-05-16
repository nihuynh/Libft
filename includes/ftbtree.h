/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftbtree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 14:18:28 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/16 18:23:28 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTBTREE_H
# define FTBTREE_H

# include <stddef.h>

typedef struct s_btree	t_btree;

struct		s_btree
{
	void	*content;
	size_t	content_size;
	t_btree	*right;
	t_btree	*left;
};

t_btree		*ft_b3new(void *content, size_t content_size);
void		ft_b3add_left(t_btree *parent_node, t_btree *new);
void		ft_b3add_right(t_btree *parent_node, t_btree *new);

void		ft_b3apply_infix(t_btree *node, void (*func)(void *, size_t c_s));
void		ft_b3apply_prefix(t_btree *node, void (*func)(void *, size_t c_s));
void		ft_b3apply_suffix(t_btree *node, void (*func)(void *, size_t c_s));

void		ft_b3del(t_btree **root, void (*del)(t_btree *));
#endif
