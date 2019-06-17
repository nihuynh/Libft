/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddendnew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklepper <sklepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 04:24:24 by sklepper          #+#    #+#             */
/*   Updated: 2019/06/16 20:41:38 by sklepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"
#include "ftio.h"

void	ft_lstaddendnew(t_list **alst, const void *data, size_t content_size)
{
	t_list *node;
	t_list *end;

	if (data == NULL)
		ft_error(__func__, __LINE__);
	if ((node = ft_lstnew(data, content_size)))
	{
		if (*alst == NULL)
			*alst = node;
		else
		{
			end = ft_lstlast(*alst);
			end->next = node;
		}
	}
	else
		ft_error(__func__, __LINE__);
}
