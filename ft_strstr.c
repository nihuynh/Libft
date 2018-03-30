
# include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t len;

	if (!(len = ft_strlen(to_find)))
		return ((char*)str);
	while (*str)
	{
		if (*str == *to_find && !(ft_memcmp(str, to_find, len)))
			return ((char*)str);
		str++;
	}
	return (NULL);
}
