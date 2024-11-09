/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <ayel-arr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:30:57 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/27 10:34:30 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty(void)
{
	char	*s;

	s = malloc(1);
	if (!s)
		return (NULL);
	s[0] = '\0';
	return (s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*s1;

	i = start;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (empty());
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	s1 = (char *)malloc(len + 1);
	if (!s1)
		return (NULL);
	while (i < (size_t)start + len && i < ft_strlen(s))
	{
		s1[i - start] = s[i];
		i++;
	}
	s1[i - (size_t)start] = '\0';
	return (s1);
}
