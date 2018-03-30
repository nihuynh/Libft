
# include "libft.h"

void	*ft_memrcpy(void *restrict dst, const void *restrict src, size_t n)
{
	t_byte	*pdst;
	t_byte	*psrc;

	pdst = (t_byte*)dst;
	psrc = (t_byte*)src; 
	while(n--)
		pdst[n] = psrc[n];
	return (dst);
}
