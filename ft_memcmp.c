
# include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		res;
	t_byte	*ps1;
	t_byte	*ps2;
	
	res = 0;
	if (s1 == s2)
		return (res);
	ps1 = (t_byte*)s1;
	ps2 = (t_byte*)s2;
	while (n-- && !res)
		res = *ps1++ - *ps2++;
	return (res);
}
