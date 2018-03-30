
# include "libft.h"
# include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *mem;

	if (!(mem = (char*)malloc(size + 1)))
		return (NULL);
	ft_bzero(mem, size + 1);
	return (mem);
}
