/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:05:06 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/03 12:21:18 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	tmp;

	tmp = ft_strlen(src);
	i = 0;
	if (tmp < size -1 && src[i] != '\0')
	{
		while (src[i] != '\0')
		{
			dest[i + tmp] = src[i];
			i++;
			dest[i + tmp] = '\0';
		}
	}
	if (tmp > size -1)
	{
		while (i < size -1)
		{
			dest[i] = src[i];
			i++;
			dest[i] = '\0';
		}
	}
	return (tmp);
}
