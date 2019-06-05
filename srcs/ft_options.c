/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:18:13 by nihuynh           #+#    #+#             */
/*   Updated: 2019/06/05 03:43:26 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"
#include "option.h"

static inline void
	parse_argv_to_int(char *str, int *res)
{
	int	is_opt;

	is_opt = 0;
	while (*str)
	{
		if (is_opt)
		{
			if (*str < 'a' || *str > 'z')
			{
				*res |= (1 << 31);
				return ;
			}
			else
				*res |= (1 << (*str - 'a'));
		}
		if (*str == '-')
			is_opt = 1;
		str++;
	}
}

t_option
	ft_options(int ac, char **av, char *usage)
{
	t_option res;

	res.argc = ac;
	res.argv = av;
	res.key_found_bitrpz = 0;
	if (ac == 1)
		return (res);
	while (ac--)
		parse_argv_to_int(av[ac], &res.key_found_bitrpz);
	if (res.key_found_bitrpz & (1 << 31))
	{
		ft_putendl("Invalid Option");
		ft_putendl(usage);
		res.key_found_bitrpz = -1;
		return (res);
	}
	if (res.key_found_bitrpz & (1 << ('h' - 'a')))
	{
		ft_putendl(usage);
		res.key_found_bitrpz = -1;
		return (res);
	}
	return (res);
}
