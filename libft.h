/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:55:45 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/09 00:05:09 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>

void	*ft_memset(void *s, int c, size_t n);
int	ft_atoi(char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
int	ft_isascii(int c);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);

// # new #
char	*ft_strnstr(const char *big, const char *little, unsigned int len);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#endif
