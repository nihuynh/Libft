
# include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *plst;

	while (*alst)
	{
		plst = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = plst;
	}
}
