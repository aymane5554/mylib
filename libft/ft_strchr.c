/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <ayel-arr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:55:35 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/26 20:39:28 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*f;

	i = 0;
	f = NULL;
	while (s[i])
	{
		f = (char *)&s[i];
		if (s[i] == (char)c)
			return (f);
		i++;
	}
	f = (char *)&s[i];
	if ((char)c == '\0')
		return (f);
	return (NULL);
}
