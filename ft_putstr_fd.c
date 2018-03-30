
# include "libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	if (str == NULL)
		return ;
	while (*str)
		ft_putchar_fd(*str++, fd);
}
