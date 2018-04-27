#include "libft.h"
#include <stdlib.h>

void 	ft_tabdel(char ***tab)
{
	int len;

	len = ft_tablen(*tab);
	while (len-- > 0)
	{
		// delete stuff
	}
	free(*tab);
	tab = NULL;
}