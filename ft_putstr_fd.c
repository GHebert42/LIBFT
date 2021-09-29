/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:02:54 by gehebert          #+#    #+#             */
/*   Updated: 2021/09/29 11:12:29 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// ft_putstr_fd.c par
//

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
}
