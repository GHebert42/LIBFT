/*
 *
 * ft_lstclear.c par germ
 *
 *   void ft_lstclear(t_list **lst, void (*del)(void*));
 *
 */

    #include "libft.h"

    void        ft_lstclear(t_list **lst, void (*del)(void *))
    {
        t_list  *curr;
        t_list  *next;

        curr = *lst;
        while (curr)
        {
            next = curr->next;
            ft_lstdelone(curr, del);
            curr = next;
        }
        *lst = NULL;
    }
