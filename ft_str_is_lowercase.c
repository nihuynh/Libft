
# include "libft.h"

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(ft_islower(*str)))
			return (0);
		str++;
	}
	return (1);
}
