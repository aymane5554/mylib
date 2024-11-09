/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:53:10 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/28 17:53:13 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pre;

	if (lst == NULL || del == NULL)
		return ;
	pre = *lst;
	while (*lst)
	{
		*lst = (*lst)->next;
		(*del)(pre->content);
		free(pre);
		pre = *lst;
	}
	*lst = NULL;
}
