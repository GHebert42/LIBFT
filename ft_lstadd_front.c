/*
 *     ft_lstadd_front.c
 *	by germ
 *	void ft_lstadd_front(t_list **lst, t_list *new);
 */

 #include "libft.h"

    void    ft_lstadd_front(t_list **lst, t_list *new)
    {
        if (lst == NULL || new == NULL)
            return ;
        new->next = *lst;
        *lst = new;
    }
