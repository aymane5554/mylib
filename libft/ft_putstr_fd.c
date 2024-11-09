/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <ayel-arr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:45:11 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/25 14:01:35 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = 0;
	if (fd < 0)
		return ;
	if (s == NULL)
	{
		write(fd, "(null)", 6);
		return ;
	}
	while (s[i])
	{
		write(fd, s + i, 1);
		i++;
	}
}
