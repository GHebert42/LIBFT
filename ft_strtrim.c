/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:15:57 by gehebert          #+#    #+#             */
/*   Updated: 2021/09/22 10:46:18 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*newstr;
	char	*comp;
	size_t	size;
	
	comp = (char*)s1;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(comp);
	while (size && ft_strchr(set, s1[size]))
		size--;
	newstr = (char *)malloc(sizeof(char) * (size + 1));
	if (newstr == NULL)
		return (NULL);
	newstr = ft_substr((char *)s1, 0, size + 1);
	return (newstr);
}

