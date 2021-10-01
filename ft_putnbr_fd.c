/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 06:39:31 by gehebert          #+#    #+#             */
/*   Updated: 2021/10/01 06:50:18 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", sizeof("-2147483648"));
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = (n * -1);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			n = n % 10;
		}
		c = n + '0';
		write(fd, &c, 1);
	}
}