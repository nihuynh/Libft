
# include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	t_byte	*pdst;
	t_byte	*psrc;

	pdst = (t_byte*)dst;
	psrc = (t_byte*)src; 
	while(n--)
		*pdst++ = *psrc++;
	return (dst);
}
