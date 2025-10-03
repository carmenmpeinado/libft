/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:04:55 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/03 13:11:56 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*ret;

	i = 0;
	while (i < n)
	{
		ret[i] = c;
		*s = *ret;
	}
	return(void *(ret))
}
