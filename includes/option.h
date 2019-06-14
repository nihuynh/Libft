/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:13:44 by nihuynh           #+#    #+#             */
/*   Updated: 2019/06/14 14:54:15 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTION_H
# define OPTION_H

typedef struct s_option	t_option;

struct			s_option
{
	int			argc;
	char		**argv;
	char		*path;
	int			key_found_bitrpz;
	void		*link_prg;
	// t_opt_func	funct[128];
	// int			(*set_func) (t_option*, char, char*, void *(*func) (void*));
	// int			(*do_) (char*, t_option);
};

// struct			s_opt_func
// {
// 	bool		in_argv;
// 	short		idx_argv;
// 	char		*name;
// 	void		*(*func) (void*);
// };

t_option	ft_options(int ac, char **av, char *usage);

#endif
