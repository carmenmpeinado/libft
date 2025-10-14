#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	i;
	char	*number;

	i = 0;
	number = ft_itoa(n);
	while(number[i])
	{
		write(fd, &number[i], 1);
		i++;
	}
}
