
# include "libft.h"

int	ft_strcasecmp(const char *s1, const char *s2)
{
	size_t n;

	n = ft_min(ft_strlen(s1) + 1, ft_strlen(s2) + 1);
	return (ft_strncasecmp(s1, s2, n));
}
