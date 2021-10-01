/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 06:09:02 by gehebert          #+#    #+#             */
/*   Updated: 2021/09/30 11:10:13 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	num;

	num = 0;
	if (!str)
		return (0);
	while (str[num] != '\0')
		num ++;
	return (num);
}
