/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:26:52 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/02 22:36:40 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"
#include "ftio.h"

void	ft_lstpushnew(t_list **alst, const void *data, size_t content_size)
{
	t_list *node;

	if (data == NULL)
		ft_error(__func__, __LINE__);
	if ((node = ft_lstnew(data, content_size)))
	{
		node->next = *alst;
		*alst = node;
	}
	else
		ft_error(__func__, __LINE__);
}
