/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:12:25 by gehebert          #+#    #+#             */
/*   Updated: 2021/10/04 14:22:49 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (!s || len == 0 || ft_strlen(s) == 0 || start >= ft_strlen(s) - 1)
		return (ft_calloc(sizeof(char), 1));
	i = 0;
	while (s[i + start] && i < len)
		i++;
	res = ft_calloc(sizeof(char), i + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	return (res);
}
