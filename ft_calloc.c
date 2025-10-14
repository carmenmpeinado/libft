/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:04:24 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/09 17:57:45 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t mmry, size_t size)
{
	void	*ptr;

	if (mmry != 0 && size > SIZE_MAX / mmry)
		return (NULL);
	if (mmry == 0 || size == 0)
		return (malloc(0));
	else
	{
		ptr = malloc(mmry * size);
		if (!ptr)
		{
			free(ptr);
			return (0);
		}
		ft_bzero(ptr, mmry * size);
		return (ptr);
	}
}
