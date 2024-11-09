/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:08:49 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/29 10:08:50 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*head2;
	t_list		*node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head2 = ft_lstnew(f(lst->content));
	if (head2 == NULL)
		return (NULL);
	node = head2;
	while (lst->next)
	{
		node->next = ft_lstnew(f(lst->next->content));
		if (node->next == NULL)
		{
			ft_lstclear(&head2, del);
			return (NULL);
		}
		node = node->next;
		lst = lst->next;
	}
	return (head2);
}
