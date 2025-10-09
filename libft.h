/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:55:45 by capeinad          #+#    #+#             */
/*   Updated: 2025/10/09 18:12:40 by capeinad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>
# include <stdint.h>

void			*ft_memset(void *s, int c, size_t n);
int				ft_atoi(const char *nptr);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isprint(int c);
int				ft_isascii(int c);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void 			*ft_memchr(const void *s, int c, size_t n);
size_t			ft_strlen(const char *str);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_strncmp(const char *s1, const char *s2, size_t n);

// # new #
char			*ft_strnstr(const char *big, const char *little,
					unsigned int len);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
char			*ft_strdup(const char *s);
void			*ft_calloc(size_t count, size_t size);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);


#endif
