
# include "libft.h"

t_list	*ft_lstlast(t_list *alst)
{
	while (alst && alst->next)
		alst = alst->next;
	return (alst);
}
