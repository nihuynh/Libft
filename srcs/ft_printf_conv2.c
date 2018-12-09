/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conv2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 19:31:09 by modaouch          #+#    #+#             */
/*   Updated: 2018/12/09 18:10:58 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ftio.h"

void	ft_string(va_list ap, t_arg *stk)
{
	ft_putstr(va_arg(ap, char *));
	stk->i++;
}

void	ft_char(va_list ap, t_arg *stk)
{
	ft_putchar(va_arg(ap, int));
	stk->i++;
}

// void	ft_float(va_list ap, t_arg *stk)
// {
// 	ft_putdouble(va_arg(ap, double), 6);
// 	stk->i++;
// }
