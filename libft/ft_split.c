/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-arr <ayel-arr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:25:55 by ayel-arr          #+#    #+#             */
/*   Updated: 2024/10/27 14:45:47 by ayel-arr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strindup(char *src, char c)
{
	int		i;
	char	*s;

	i = 0;
	while (src[i] != '\0' && src[i] != c)
		i++;
	s = (char *)malloc(i + 1);
	if (!s)
	{
		free(s);
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0' && src[i] != c)
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

static	int	word_count(char	*s, char c)
{
	int		i;
	int		count;
	int		f;

	if (s == NULL)
		return (-100);
	f = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			f = 0;
		else if (s[i] != c && f == 0)
		{
			f = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static void	*free_all(char **arr)
{
	int		i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr[i]);
	free(arr);
	return (NULL);
}

static void	setzero(int *i, int *j, char *f)
{
	*i = 0;
	*j = 0;
	*f = 0;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;
	char	f;

	setzero(&i, &j, &f);
	arr = (char **)malloc((word_count((char *)s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			f = 0;
		else if (s[i] != c && f == 0)
		{
			arr[j] = ft_strindup((char *)(s + i), c);
			if (arr[j] == NULL)
				return (free_all(arr));
			f = 1;
			j++;
		}
		i++;
	}
	arr[j] = NULL;
	return (arr);
}
