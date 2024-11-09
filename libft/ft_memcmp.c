/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <ayel-arr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:40:17 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/27 11:49:13 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s01;
	unsigned char	*s02;

	if (n == 0)
		return (0);
	i = 0;
	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	while (i < n && s01[i] == s02[i])
		i++;
	if (i == n)
		i--;
	return (s01[i] - s02[i]);
}
