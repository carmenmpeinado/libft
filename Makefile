# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/03 00:40:52 by capeinad          #+#    #+#              #
#    Updated: 2025/10/09 17:13:57 by capeinad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRCS = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_isascii.c ft_memset.c ft_strncmp.c \
	ft_isalpha.c ft_isprint.c ft_strlcpy.c ft_strnstr.c ft_strlen.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strrchr.c ft_toupper.c \
	ft_tolower.c ft_strlcat.c ft_strdup.c ft_memcmp.c ft_calloc.c ft_memchr.c \
	ft_split.c ft_itoa.c ft_substr.c ft_putstr_fd.c ft_putnbr_fd.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_strjoin.c ft_strtrim.c ft_strmapi.c \
	ft_striteri.c
BONUS_SRCS = 

OBJ_FILES = $(SRCS:.c=.o)
B_OBJ_FILES =$(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

bonus: $(B_OBJ_FILES)
	ar rcs $(NAME) $(B_OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES) $(B_OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
