/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:08:26 by gehebert          #+#    #+#             */
/*   Updated: 2021/10/06 15:10:42 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst && (*lst) && new)
	{
		last = (*lst);
		if (last == NULL)
			(*lst) = new;
		else
		{
			while (last->next)
				last = last->next;
			last->next = new;
		}
	}
}
