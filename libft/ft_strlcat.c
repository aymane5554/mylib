/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <ayel-arr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:42:20 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/27 11:43:43 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		dl;
	size_t		sl;

	sl = ft_strlen(src);
	if (dstsize == 0 && dst == NULL)
		return (sl);
	dl = ft_strlen(dst);
	if (dstsize < dl)
		return (dstsize + sl);
	i = dl;
	j = 0;
	if (dstsize != 0)
	{
		while (i < dstsize -1 && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (dl + sl);
}
