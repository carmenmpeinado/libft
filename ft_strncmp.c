/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:05:18 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/03 12:21:46 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && i < n)
	{
		if ((s1[i] != s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	fir[] = "";
	char	sec[] = "abcdefghijlm";
	unsigned int n = 10;
	printf("%d\n", ft_strncmp(fir, sec, n));
	printf("%d", strncmp(fir, sec, n));
	return (0);
}
	*/
