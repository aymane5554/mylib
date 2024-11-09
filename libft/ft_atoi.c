/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <ayel-arr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:16:09 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/26 16:24:32 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static void	pre(const char **ptr, int *sign)
{
	while (**ptr == ' ' || (**ptr >= 9 && **ptr <= 13))
	{
		*ptr = *ptr + 1;
	}
	if (**ptr == '-' || **ptr == '+')
	{
		if (**ptr == '-')
			*sign = -1;
		*ptr = *ptr + 1;
	}
}

int	ft_atoi(const char *ptr)
{
	int			sign;
	long long	total;

	sign = 1;
	total = 0;
	pre(&ptr, &sign);
	while (*ptr >= '0' && *ptr <= '9')
	{
		total = (total * 10) + (*ptr - '0');
		if (total > (LLONG_MAX - (*ptr - '0')) / 10)
		{
			if (sign == 1)
				return (-1);
			if (sign == -1)
				return (0);
		}
		ptr++;
	}
	return ((int)(total * sign));
}
