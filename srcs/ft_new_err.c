/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 23:38:15 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/22 23:49:05 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fterror.h"

t_err	ft_new_err(char *err_msg, const char *func, int line, const char *file)
{
	t_err	res;

	res.err_msg = err_msg;
	res.file = file;
	res.func = func;
	res.line = line;
}
