/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:54:31 by gehebert          #+#    #+#             */
/*   Updated: 2021/10/01 13:02:46 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (n < i)
	{
		while (src[j])
			j++;
		return (n + j);
	}
	while (n > 0 && i < n - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}
