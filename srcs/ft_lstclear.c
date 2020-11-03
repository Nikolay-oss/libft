#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *node;

	node = NULL;
	while (!*lst)
	{
		node = (*lst)->next;
		del(node->content);
		free(node->content);
		*lst = node;
	}
}
