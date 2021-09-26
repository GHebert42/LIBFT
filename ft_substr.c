/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:12:25 by gehebert          #+#    #+#             */
/*   Updated: 2021/09/24 09:03:57 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*new;
	unsigned int	i;

	i = start;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (s[i] == '\0' && len > 1)
		len = 1;
	while (s[i] != '\0')
		i++;
	if (len > (i - start))
		len = i - start;
	if (! (new = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (len > 0)
	{
		new[i++] = s[start];
		start++;
		len--;
	}
	new[i] = '\0';
	return (new);
}
