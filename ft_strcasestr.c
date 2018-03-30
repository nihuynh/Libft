
# include "libft.h"

char	*ft_strcasestr(const char *s, const char *ne)
{
	size_t len;

	if (!(len = ft_strlen(ne)))
		return ((char*)s);
	while (*s)
	{
		if (ft_tolower(*s) == ft_tolower(*ne) && !(ft_strncasecmp(s, ne, len)))
			return ((char*)s);
		s++;
	}
	return (NULL);
}
