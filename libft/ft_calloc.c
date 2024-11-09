/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <ayel-arr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:32:29 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/25 17:35:07 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*s;
	size_t		i;
	size_t		t;

	i = 0;
	t = count * size;
	if (t != 0 && (t / size) != count)
		return (NULL);
	s = (char *)malloc(t);
	if (!s)
		return (NULL);
	while (i < t)
	{
		s[i] = 0;
		i++;
	}
	return ((void *)s);
}
