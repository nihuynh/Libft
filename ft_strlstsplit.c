# include "libft.h"

t_list ft_split_tolst(char **split)
{
	t_list *res;

	while (split != NULL)
	{
		ft_lstadd(&res, ft_lstnew(*split, sizeof(char*)));
		split++;
	}
	ft_lstrev(&res);
	return (*res);
}

t_list	ft_strlstsplit(const char *str, char c)
{
	return (ft_split_tolst(ft_strsplit(str, c)));
}
