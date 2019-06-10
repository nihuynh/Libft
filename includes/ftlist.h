/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlist.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 01:10:23 by nihuynh           #+#    #+#             */
/*   Updated: 2019/06/10 23:24:23 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTLIST_H
# define FTLIST_H

# include <stddef.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **als, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstaddbk(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstiteri(t_list *lst, void (*f)(t_list *elem, int idx));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
size_t				ft_lstlen(t_list const *lst);
void				ft_lstrev(t_list **alst);
t_list				*ft_lstlast(t_list *alst);
t_list				*ft_lstat(t_list *alst, unsigned int n);
t_list				*ft_lstget(t_list *alst, int v, int (*cmp)(void *c, int v));
void				*ft_lstgetelt(t_list *alst, int (*cmp)(void *c, void *k),
	void *key);
void				ft_lstpushnew(t_list **alst, const void *data,
	size_t content_size);
void				ft_lstiter_arg(int arg, t_list *lst,
	void (*f)(int arg, t_list *elem));
t_list				*ft_lstgetnode(t_list *alst, int (*cmp)(void *c, void *k),
	void *key);
void				*ft_lstgetelt_by_content_ptr(t_list *alst, void *key);
t_list				*ft_lstgetnode_by_content_ptr(t_list *alst, void *key);
t_list				*ft_lstpop(t_list *lst, t_list *to_del,
	void(*f)(void*, size_t));

#endif
