/*
 *
 * ft_lstsize.c par germ
 *
 * int ft_lstsize(t_list *lst);
*/
 
#include "libft.h"

    int     ft_lstsize(t_list *lst)
    {
        int size;

        size = 0;
        while (lst != NULL)
        {
            lst = lst->next;
            size++;
        }
        return (size);
    }

- (lst++) == (lst = lst->next)
