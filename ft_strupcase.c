
# include "libft.h"

char	*ft_strupcase(char *str)
{
	char *pstr;

	pstr = str;
	while (*pstr)
	{
		*pstr = (char)ft_toupper(*pstr);
		pstr++;
	}

	return (str);
}
