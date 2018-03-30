
# include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char 			*res;
	unsigned int	index;

	if (!f || !s)
		return (NULL);
	len = ft_strlen(s);
	if(!(res = ft_strnew(len)))
		return (NULL);
	index = 0;
	while (*s)
		*res++ = f(index++, *s++);
	res -= len;
	return (res);
}
