/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 19:31:09 by modaouch          #+#    #+#             */
/*   Updated: 2018/12/09 17:21:26 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_string(va_list ap, t_arg *stk)
{
	stk->conv = (char *)va_arg(ap, char *);
	ft_putstr(stk->conv);
	stk->i++;
}

void	ft_char(va_list ap, t_arg *stk)
{
	char	c;

	c = (char)va_arg(ap, int);
	ft_putchar(c);
	stk->i++;
}
