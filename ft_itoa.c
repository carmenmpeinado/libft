#include "libft.h"

static unsigned long	numlen(long long number)
{
	int	ten;
	unsigned long	digit;

	ten = 10;
	digit = 1;
	while(number >= ten)
	{
		number = number / 10;
		digit++;
	}
	return(digit);
}
static char	*allocate_digit(long long number, _Bool sign)
{
	char	*array;

	if(sign == 1)
		array = malloc(numlen(number) + 2);
	if (sign == 0)
		array = malloc(numlen(number) + 1);
	if(!array)
		return(0);
	return(array);
}

char	*ft_itoa(int n)
{
	long long	number;
	_Bool	sign;
	char	*array;
	int	i;

	sign = 0;
	number = n;
	if(n < 0)
	{
		number *= -1;
		sign = 1;
	}
	array = allocate_digit(number, sign);
	i = numlen(number) + sign - 1;
	array[i + 1] = '\0';
	while (i >= sign)
	{
		array[i] = '0' + (number % 10);
		number = number / 10;
		i--;
	}
	if (sign)
		array[0] = '-';
	return(array);
}
