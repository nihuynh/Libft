/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddbk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 08:14:46 by nihuynh           #+#    #+#             */
/*   Updated: 2018/03/30 08:14:46 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void ft_lstaddbk(t_list **alst, t_list *new)
{
	if (new)
	{
		if (*alst != NULL)
		{
			ft_lstlast(*alst)->next = new;
			new->next = NULL;
		}
		else
			ft_lstadd(alst, new);
	}
}
