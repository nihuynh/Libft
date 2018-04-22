/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:31:46 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/03 16:27:03 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include <stdlib.h>

static size_t	ft_wordcount(char const *str, char c)
{
	size_t count;

	count = 1;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

char			**ft_strsplit(char const *str, char c)
{
	char	**res;
	size_t	index;
	size_t	wordlen;

	if (str == NULL)
		return (NULL);
	index = 0;
	if (!(res = (char**)malloc((ft_wordcount(str, c) * sizeof(char*)))))
		return (NULL);
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			wordlen = ft_strclen(str, c);
			if (!(res[index] = ft_strnew(wordlen)))
				return (NULL);
			ft_strncpy(res[index], str, wordlen);
			str += wordlen;
			index++;
		}
	}
	res[index] = NULL;
	return (res);
}