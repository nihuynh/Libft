
# include "libft.h"

int		ft_isxdigit(int c)
{
	return (ft_isdigit(c) || ft_btw(c, 65,70) || ft_btw(c, 97, 102));
}
