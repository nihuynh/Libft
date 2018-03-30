
# include "libft.h"

char	*ft_itoa(int value)
{
	char			*res;
	int				index;
	unsigned int	carry;

	carry = ft_abs(value);
	index = (value < 0) ? 2 : 1;
	while (carry /= 10)
		index++;
	carry = ft_abs(value);
	if (!(res = ft_strnew(index)))
		return (NULL);
	while (carry)
	{
		res[--index] = carry % 10 + 48;
		carry /= 10;
	}
	if (value < 0)
		res[0] = '-';
	else if (value == 0)
		res[0] = '0';
	return (res);
}
