
# include "libft.h"

char *ft_strrchr (const char *str, int c)
{
	size_t len;

	len = ft_strlen(str);
	str += len;
	while (*str == (char)c || len--)
	{
		if (*str == (char)c)
			return ((char*)str);
		str--;
	}
	return (NULL);
}
