
# include "libft.h"

void	ft_putstr(const char *str)
{
	if (str == NULL)
		return ;
	while (*str)
		ft_putchar(*str++);
}
