/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 01:07:15 by modaouch          #+#    #+#             */
/*   Updated: 2018/12/09 17:16:02 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONV_H
# define FT_CONV_H

# include "../includes/ft_printf.h"

t_conv g_convtab[] =
{
	{"%", &ft_percent},
	{"d", &ft_digit},
	{"i", &ft_digit},
	{"D", &ft_digit},
	{"o", &ft_octal},
	{"s", &ft_string},
	{"c", &ft_char},
	{"x", &ft_hex},
	{"X", &ft_hex_up},
	{"s", &ft_string},
	{0, NULL}
};

#endif
