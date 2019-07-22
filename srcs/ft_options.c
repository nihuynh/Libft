/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:18:13 by nihuynh           #+#    #+#             */
/*   Updated: 2019/07/22 14:42:48 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"
#include "ftmem.h"
#include "ftstring.h"
#include "option.h"

static inline void
	parse_argv_to_int(char *str, int *res, int *count_opt)
{
	int	is_opt;

	if (*str && *str == '-')
	{
		is_opt = 1;
		*count_opt += 1;
		str++;
	} else
		is_opt = 0;
	while (*str)
	{
		if (is_opt)
		{
			if (*str < 'a' || *str > 'z')
			{
				*res |= (1UL << 31);
				return ;
			}
			else
				*res |= (1UL << (*str - 'a'));
		}
		str++;
	}
}

static inline t_option
	err_return(t_option res, char *msg, char *usage)
{
	ft_putendl(msg);
	ft_putendl(usage);
	return (res);
}

static inline bool
	test(t_option option, char key)
{
	return (!(!(option.key_found_bitrpz & (1UL << (key - 'a')))));
}

static inline void
	reset(t_option *option, char key)
{
	option->key_found_bitrpz &= ~(1UL << (key - 'a'));
}

t_option
	ft_options(int ac, char **av, char *usage)
{
	t_option	res;
	char		*exe_name;

	ft_bzero(&res, sizeof(t_option));
	res.argc = ac;
	res.argv = av;
	res.test_ = &test;
	res.reset_ = &reset;
	if ((exe_name = ft_strrchr(av[0], '/')))
		res.path = ft_strndup(av[0], ft_strlen(av[0]) - ft_strlen(++exe_name));
	else
		res.path = "./";
	if (ac == 1)
		return (res);
	while (ac-- > 1)
		parse_argv_to_int(av[ac], &res.key_found_bitrpz, &res.count_opt);
	if (res.key_found_bitrpz & (1UL << 31))
		return (err_return(res, "Invalid Option", usage));
	if (res.key_found_bitrpz & (1UL << ('h' - 'a')))
		return (err_return(res, NULL, usage));
	return (res);
}
