
# include "libft.h"
# include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	if (!(node = (t_list*)malloc(sizeof(*node))))
		return (NULL);
	if (content == NULL)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		if (!(node->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	node->next = NULL;
	return (node);
}
