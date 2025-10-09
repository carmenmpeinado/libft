/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:04:35 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/09 03:03:00 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int hw= '\v';
	int w1 = 's';
	int s= '\0';

	printf("%d", ft_isascii(hw));
	printf("%d", ft_isascii(w1));
	printf("%d", isascii(s));
}
*/
