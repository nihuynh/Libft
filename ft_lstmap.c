
# include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list* (*f)(t_list *elem))
{
	t_list *res;

	res = NULL;
	while (lst)
	{
		ft_lstadd(&res, f(lst));
		lst = lst->next;
	}
	ft_lstrev(&res);
	return (res);
}
