/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkenchur <dkenchur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:41:19 by dkenchur          #+#    #+#             */
/*   Updated: 2020/11/04 05:07:16 by dkenchur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *node;

	node = NULL;
	if (!del)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		*lst = node;
	}
}
