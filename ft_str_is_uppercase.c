
# include "libft.h"

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(ft_isupper(*str)))
			return (0);
		str++;
	}
	return (1);
}
