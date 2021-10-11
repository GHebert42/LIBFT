/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:46:59 by gehebert          #+#    #+#             */
/*   Updated: 2021/10/11 11:18:21 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	freed(char **dst, int i)
{
	while (--)
		free(dst[i]);
	return (-1);
}

static


static int	num_item(char const *s, char sep)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if ((s[i + 1] == sep || s[i + 1] == '\0') == 1
			&& (s[i] == sep || s[i] == '\0') == 0)
			i++;
	}
	return (num);
}

static void	num_set(char const *s, char *dst, char sep)
{
	int	i;

	i = 0;
	while ((s[i] == sep || s[i] == '\0') == 0)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
}

static char	item_set(char const *s, char **dst, char sep)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		if ((ss[i] == sep || s[i] == '\0') == 1)
			i++;
		else
		{
			j = 0;
			while ((s[i + j] == sep || s[i + j] == '\0') == 0)
				j++;
			dst[num] = (char *)malloc(sizeof(char) * (j + 1));
			if (dst[num] == NULL)
				return (freed(dst, num - 1));
			num_set(dst[num], s + 1, sep);
			i += j;
			num++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		item;

	item = num_item(s, c);
	str = (char **)malloc(sizeof(char *) * (item + 1));
	if (str == NULL)
		return (NULL);
	str[item] = 0;
	if (item_set(str, s, c) == -1)
		return (NULL);
	return (str);
}
