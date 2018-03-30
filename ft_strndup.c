
# include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*res;
	size_t	size;

	size = ft_min(ft_strlen(src), n);
	if (!(res = ft_strnew(size)))
		return (NULL);
	ft_memcpy(res, src, size);
	return (res);
}
