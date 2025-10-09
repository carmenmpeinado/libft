/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:05:21 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/09 17:29:21 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	j;
	unsigned int	i;

	j = 0;
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[j] != '\0' && j < len)
	{
		while (little[i] == big[j + i] && j + i < len)
		{
			if (little[i + 1] == '\0')
				return ((char *)big + j);
			i++;
		}
		i = 0;
		j++;
	}
	return ((void *)0);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	const char *largestring = "aaaa";
	const char *smallstring = "";
	char *ptr;

	ptr = (largestring, smallstring, 3);
	printf("%s", ptr);
	
}	*/
