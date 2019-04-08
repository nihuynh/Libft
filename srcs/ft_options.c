/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:18:13 by nihuynh           #+#    #+#             */
/*   Updated: 2019/04/08 17:32:48 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"

static inline void	parse(char *str, int *res)
{
	int	is_opt;

	is_opt = 0;
	while (*str)
	{
		if (is_opt)
		{
			if (*str < 97 || *str > 122)
			{
				*res |= (1 << 31);
				return ;
			}
			else
				*res |= (1 << (*str - 97));
		}
		if (*str == '-')
			is_opt = 1;
		str++;
	}
}

int					ft_options(int ac, char **av, char *usage)
{
	int	res;

	res = 0;
	if (ac == 1)
		return (0);
	while (ac--)
		parse(av[ac], &res);
	if (res & (1 << 31))
	{
		ft_putendl("Invalid Option");
		return (-1);
	}
	if (res & (1 << 7))
	{
		ft_putendl(usage);
		return (-1);
	}
	return (res);
}
