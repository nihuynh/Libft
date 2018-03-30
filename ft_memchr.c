
# include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	t_byte *pstr;

	pstr = (t_byte*)str;
	while (n--)
	{
		if (*pstr == (t_byte)c)
			return ((void *)pstr);
		pstr++;
	}
	return (NULL);
}
