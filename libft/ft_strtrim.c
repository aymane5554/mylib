/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <ayel-arr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:49:38 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/26 16:11:49 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isin(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		e;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i])
	{
		if (isin(s1[i], set) == 0)
			break ;
		i++;
	}
	e = ft_strlen(s1) - 1;
	while (e > i)
	{
		if (isin(s1[e], set) == 0)
			break ;
		e--;
	}
	if (e == i)
		return ((char *)&s1[i]);
	return (ft_substr(s1, i, (e - i) + 1));
}
