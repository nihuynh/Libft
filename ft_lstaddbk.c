
# include "libft.h"

void ft_lstaddbk(t_list **alst, t_list *new)
{
	if (new)
	{
		if (*alst != NULL)
		{
			ft_lstlast(*alst)->next = new;
			new->next = NULL;
		}
		else
			ft_lstadd(alst, new);
	}
}
