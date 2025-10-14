#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		new = malloc(1);
		if (!new)
			return (0);
		new[0] = '\0';
		return (new);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new = malloc(len + 1);
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, len + 1);
	return (new);
}

// #include <stdio.h>

// int main (void)
// {
// 	char *s1 ="For all the ghosts that are never gonna catch me";
// 	char *s2 = ft_substr(s1, 4, 18);

// 	printf("%s", s2);
// }
