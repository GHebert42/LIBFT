/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:46:59 by gehebert          #+#    #+#             */
/*   Updated: 2021/09/24 10:12:27 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int		kstr(char const *s, char c)
{
	int	k;
	
	k = 0;
	if (*s == '\0')
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			k++;
		s++;
	}
	return (k);
}

static int		lenstr(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char		**fr(char const **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free(dst);
	return (NULL);
}

static char		**new(char const *s, char **dst, char c, int len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < len)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dst[j] = (char *)malloc(sizeof(char) * lenstr(s, c, i) + 1);
		if (dst[j] == NULL)
			return (fr((char const **)dst, j));
		while (s[i] != '\0' && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = 0;
	return (dst);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;
	int		len;

	if (s == NULL)
		return (NULL);
	len = kstr(s, c);
	dst = (char **)malloc(sizeof(char *) * (len + 1));
	if (dst == NULL)
		return (NULL);
	return (new(s, dst, c, len));
}
