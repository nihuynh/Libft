
# include "libft.h"

static size_t	ft_strlentrim(const char *str)
{
	size_t len;

	len = ft_strlen(str);
	str += len - 1;
	while (len && (ft_isblank(*str) || *str == '\n'))
	{
		str--;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s)
{
	size_t	len;
	char	*res;
	
	if (s == NULL)
		return (NULL);
	while (*s && (ft_isblank(*s) || *s == '\n'))
		s++;
	len = ft_strlentrim(s);
	if (!(res = ft_strnew(len)))
		return (NULL);
	ft_strlcpy(res, s, len + 1);
	return (res);
}
