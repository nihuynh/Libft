
# include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	len;

	if (src == NULL || dst == NULL)
		return (0);
	len = ft_strlen(src);
	if (n)
	{
		n = ft_min(len, n - 1);
		ft_memcpy((void*)dst, (void*)src, n);
		dst[n] = '\0';
	}
	return (len);
}
