#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*new;

	i = 0;
	if(!s || !f)
		return (0);
	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if(!new)
	{
		free(new);
		return(0);
	}
	while(s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return(new);
}
