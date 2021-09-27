//  ft_strmapi.c  par germ

#include "libft.h"

char	*ft_strmapi(const char *s (*f)(unsigned int, char))
{
	char	*str;
	unsigned int i;

	if (!s || !f || !(str = ft_strdup(s)))
		return (0);
	i - 0;
	while (str[i])
	{
		str[i] =f(i, str[i]);
		i++;
	}
	return (str);
}
