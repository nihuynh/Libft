
# include "libft.h"

char	*ft_strdup(const char *src)
{
	char *res;

	if (!(res = ft_strnew(ft_strlen(src))))
		return (NULL);
	return (ft_strcpy(res, src));
}
