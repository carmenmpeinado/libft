#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	char *s;
	char expected[50];

	printf("Testing ft_itoa:\n\n");

	sprintf(expected, "%d", INT_MAX);
	s = ft_itoa(INT_MAX);
	printf("INT_MAX: %s | Expected: %s | %s\n", s, expected, strcmp(s, expected) ? "❌" : "✅");
	free(s);

	sprintf(expected, "%d", INT_MIN);
	s = ft_itoa(INT_MIN);
	printf("INT_MIN: %s | Expected: %s | %s\n", s, expected, strcmp(s, expected) ? "❌" : "✅");
	free(s);

	sprintf(expected, "%d", 0);
	s = ft_itoa(0);
	printf("0      : %s | Expected: %s | %s\n", s, expected, strcmp(s, expected) ? "❌" : "✅");
	free(s);

	sprintf(expected, "%d", 1);
	s = ft_itoa(1);
	printf("1      : %s | Expected: %s | %s\n", s, expected, strcmp(s, expected) ? "❌" : "✅");
	free(s);

	sprintf(expected, "%d", -1);
	s = ft_itoa(-1);
	printf("-1     : %s | Expected: %s | %s\n", s, expected, strcmp(s, expected) ? "❌" : "✅");
	free(s);

	sprintf(expected, "%d", 42);
	s = ft_itoa(42);
	printf("42     : %s | Expected: %s | %s\n", s, expected, strcmp(s, expected) ? "❌" : "✅");
	free(s);

	return (0);
}
