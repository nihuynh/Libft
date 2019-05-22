/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fterror.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 23:37:18 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/22 23:48:24 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTERROR_H
# define FTERROR_H

typedef struct		s_err
{
	char			*err_msg;
	const char		*func;
	const char		*file;
	int				line;
}					t_err;

t_err				ft_new_err(char *err_msg, const char func[], int line,
	const char file[]);

#endif
