
# include "libft.h"

int		ft_btw(int value, int limit1, int limit2)
{
	return (value >= ft_min(limit1, limit2) && value <= ft_max(limit1, limit2));
}
