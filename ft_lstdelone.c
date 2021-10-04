/*
 * ft_lstdelone.c par germ
 *
 *   void ft_lstdelone(t_list *lst, void (*del)(void*));
 *
 */
   #include "libft.h"

    void    ft_lstdelone(t_list *lst, void (*del)(void *))
    {
        if (lst == NULL)
    		return ;
        del(lst->content);
        free(lst);
    }
