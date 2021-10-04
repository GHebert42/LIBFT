/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 06:21:03 by gehebert          #+#    #+#             */
/*   Updated: 2021/10/04 19:00:29 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_arr(char *x, unsigned int number, long int len)
{
	while (number > 0)
	{
		x[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (x);
}

static long int	ft_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char				*str;
	long int			n;
	unsigned int		num;
	int					i;

	i = 1;
	n = ft_len(nb);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!(str))
		return (NULL);
	str[n--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = nb * -1;
		i *= -1;
	}
	else
		num = nb;
	str = ft_arr(str, num, n);
	return (str);
}
