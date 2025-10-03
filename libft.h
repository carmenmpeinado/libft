/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:55:45 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/03 11:57:50 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

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
