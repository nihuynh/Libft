
# include "libft.h"

char	*ft_strmap(char const *s, char(*f)(char))
{
	size_t len;
	char *res;

	if (!f || !s)
		return (NULL);
	len = ft_strlen(s);
	if(!(res = ft_strnew(len)))
		return (NULL);
	while (*s)
		*res++ = f(*s++);
	res -= len;
	return (res);
}
