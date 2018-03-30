
# include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,  size_t n)
{
	t_byte	*pdst;
	t_byte	*psrc;

	pdst = (t_byte*)dst;
	psrc = (t_byte*)src;
	while(n--)
	{
		*pdst++ = *psrc++;
		if (*(pdst - 1) == (t_byte)c)
			return ((void *)pdst);
	}
	return (NULL);
}
