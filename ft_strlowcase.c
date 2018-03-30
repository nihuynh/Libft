
# include "libft.h"

char	*ft_strlowcase(char *str)
{
	char *pstr;

	pstr = str;
	while (*pstr)
	{
		*pstr = (char)ft_tolower(*pstr);
		pstr++;
	}
	return (str);
}
