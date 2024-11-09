/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <ayel-arr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:55:50 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/27 14:07:39 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int		i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	power10(int n)
{
	int		num;

	num = 10;
	if (n == 0)
		return (1);
	n--;
	while (n > 0)
	{
		num *= 10;
		n--;
	}
	return (num);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		nl;
	char	c;

	if (fd < 0)
		return ;
	if (n == 0)
		write(fd, "0", 1);
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
		write(fd, "-", 1);
	nl = numlen(n);
	while (nl > 0)
	{
		c = ft_abs((n / power10(nl - 1)) % 10);
		c += '0';
		write(fd, &c, 1);
		nl--;
	}
}
