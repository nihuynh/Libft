
# include "libft.h"

t_list	*ft_lstat(t_list *alst, unsigned int n)
{
	while (n-- && alst && alst->next)
		alst = alst->next;
	return (n == 0) ? alst : NULL;
}
