#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	if (!lst)
		return (lst);
	node = lst;
	while (!node->next)
		node = node->next;
	return (node);
}