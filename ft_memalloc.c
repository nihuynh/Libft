
# include "libft.h"
# include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *mem;

	if (size == 0 || !(mem = malloc(size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
