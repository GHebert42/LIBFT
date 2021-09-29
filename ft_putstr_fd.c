// ft_putstr_fd.c par
//

#include "libft.h"

void ft_putstr_fd(char *s, void (*f)(unsigned int, char*))
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
}
