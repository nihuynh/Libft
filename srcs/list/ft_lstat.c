/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:13:24 by nihuynh           #+#    #+#             */
/*   Updated: 2019/06/14 08:03:04 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

t_list	*ft_lstat(t_list *alst, unsigned int n)
{
	while (n-- && alst && alst->next)
		alst = alst->next;
	return (alst != NULL) ? alst : NULL;
}
