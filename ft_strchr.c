
# include "libft.h"

char *ft_strchr (const char *str, int c)
{
	while (*str == (char)c || *str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
