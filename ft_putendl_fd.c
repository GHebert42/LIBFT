/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:03:20 by gehebert          #+#    #+#             */
/*   Updated: 2021/09/29 11:13:30 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// ft_putendl.c  par germ
//
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
