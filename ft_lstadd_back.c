/*
 *
 * ft_lstadd_back.c par germ
 *
 *   void ft_lstadd_back(t_list **, t_list *new);
 *
 */
    #include "libft.h"
    
    void    ft_lstadd_back(t_list **lst, t_list *new)
    {
        t_list *last;
        
        if (lst == NULL || new_node == NULL)
    		return ;
    	if (*lst == NULL)
    	{
    		*lst = new_node;
    		return ;
    	}
        last = ft_lstlast(*lst);
        new->next = last->next;
        last->next = new;
    }
