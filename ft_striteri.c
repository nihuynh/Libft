
# include "libft.h"

void	ft_striteri(char *s, void(*f) (unsigned int, char *))
{
	unsigned int index;

	if (!f || !s)
		return ;
	index = 0;
	while (*s)
		f(index++, s++);
}
