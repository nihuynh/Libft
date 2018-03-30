
# include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t len;

	len = ft_min(ft_strlen(s1) + 1, ft_strlen(s2) + 1);
	return (ft_memcmp(s1, s2, len));
}
