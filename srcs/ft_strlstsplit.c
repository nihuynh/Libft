/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:22:59 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/03 16:22:43 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	ft_split_tolst(char **split)
{
	t_list *res;

	while (split != NULL)
	{
		ft_lstadd(&res, ft_lstnew(*split, sizeof(char*)));
		split++;
	}
	ft_lstrev(&res);
	return (*res);
}

t_list			ft_strlstsplit(const char *str, char c)
{
	return (ft_split_tolst(ft_strsplit(str, c)));
}
