/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gehebert <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:03:27 by gehebert          #+#    #+#             */
/*   Updated: 2021/10/06 15:14:53 by gehebert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_next;
	t_list	*curr;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_head = ft_lstnew(f(lst->content));
	if (new_head == NULL)
		return (NULL);
	curr = new_head;
	lst = lst->next;
	while (lst)
	{
		new_next = ft_lstnew(f(lst->content));
		if (new_next == NULL)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		curr->next = new_next;
		curr = new_next;
		lst = lst->next;
	}
	return (new_head);
}
