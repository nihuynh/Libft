
# include "libft.h"

char* ft_strjoin(char const *s1, char const *s2)
{
	size_t len;
	char *res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(res = ft_strnew(len)))
		return (NULL);
	return (ft_strcat(ft_strcpy(res, s1), s2));
}
