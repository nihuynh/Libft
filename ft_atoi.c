
# include "libft.h"

int		ft_atoi(const char *str)
{
	int res;
	int neg;

	res = 0;
	while (*str && (ft_isspace(*str)))
		str++;
	neg = (*str == 45) ? 1 : -1;
	if (*str && (*str == 43 || *str == 45))
		str++;
	while (*str && (*str >= 48 && *str <= 57))
	{
		res = res * 10 - (*str - 48);
		str++;
	}
	return (res * neg);
}
