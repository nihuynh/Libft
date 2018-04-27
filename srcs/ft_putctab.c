#include "ftio.h"

void	ft_putctab(char **tab, char c)
{
	while (*tab)
	{
		ft_putstr(*tab++);
		ft_putchar(c);
	}
}