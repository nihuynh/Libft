
# include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t len;

	len = ft_min(ft_strlen(s1) + 1, ft_strlen(s2) + 1);
	len = ft_min(len, n);
	return (ft_memcmp(s1, s2, len));
}
