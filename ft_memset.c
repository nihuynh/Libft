
# include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	t_byte *pb;
	
	pb = (t_byte*)b;
	while (len--)
		*pb++ = (t_byte)c;
	return (b);
}
