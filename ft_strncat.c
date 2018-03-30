
# include "libft.h"

char	*ft_strncat(char *restrict dst, const char *restrict src, size_t n)
{
	char *pdst;

	pdst = dst;
	while (*pdst)
		pdst++;
	while (*src && n-- >= 1)
		*pdst++ = *src++;
	*pdst = '\0';
	return (dst);
}
