/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lifetime.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 00:25:07 by nihuynh           #+#    #+#             */
/*   Updated: 2019/05/19 00:56:28 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIFETIME_H
# define LIFETIME_H

# define EXIT_ONFAIL	3
# define NO_ONFAIL		0

typedef struct s_lt	t_lt;

struct				s_lt
{
	void			*data;
	void			(*destruct)(void *);
	t_lt			*next;
};

void				*lt_add(t_lt **lt, void *d, void destruct(void *), int mod);
int					lt_detach(t_lt **lt, void *data);
int					lt_detach_all(t_lt **lt);
int					lt_destroy(t_lt **lt);

#endif
