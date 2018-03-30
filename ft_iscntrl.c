
# include "libft.h"

int 	ft_iscntrl(int c)
{
	return (ft_isascii(c) && !(ft_isprint(c)));
}
