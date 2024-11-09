/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <ayel-arr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:29:50 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/26 20:39:39 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*f;

	i = 0;
	f = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			f = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
	{
		f = (char *)&s[i];
		return (f);
	}
	return (f);
}
