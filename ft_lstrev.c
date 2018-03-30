
# include "libft.h"

void	ft_lstrev(t_list **alst)
{
	t_list	*palst;
	t_list	*tmp;

	tmp = NULL;
	if (!alst || !*alst)
		return ;
	while (*alst)
	{
		palst = (*alst)->next;
		(*alst)->next = tmp;
		tmp = *alst;
		*alst = palst;
	}
	*alst = tmp;
}