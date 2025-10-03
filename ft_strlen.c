/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:05:15 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/03 12:21:40 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;
	char	str[100] = "I have X chars";
	
	n = ft_strlen(str);
	printf("%d", n);
	return (0);
}
*/
