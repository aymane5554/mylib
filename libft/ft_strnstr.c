/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <ayel-arr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:59:29 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/26 10:03:30 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*isin(const char *haystack, const char *needle,
				size_t len, size_t i)
{
	size_t		j;
	char		*l;

	j = 0;
	l = (char *)&haystack[i];
	while (needle[j])
	{
		if (haystack[i + j] != needle[j] || (j + i) >= len)
		{
			l = 0x0;
			return (l);
		}
		j++;
	}
	return (l);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	i = 0;
	if (haystack == NULL && len == 0)
		return (NULL);
	if ((char)*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (isin(haystack, needle, len, i) != 0x0)
			return (isin(haystack, needle, len, i));
		i++;
	}
	return (0x0);
}
