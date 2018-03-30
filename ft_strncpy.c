
# include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char *pdst;

	pdst = dst;
	while (*src && n > 0)
	{
		*pdst++ = *src++;
		n--;
	}
	ft_bzero(pdst, n);
	return (dst);
}
