# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: capeinad <capeinad@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/03 00:40:52 by capeinad          #+#    #+#              #
#    Updated: 2025/10/03 12:19:27 by capeinad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRCS = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memset.c ft_strncmp.c ft_isalpha.c ft_isprint.c ft_strlcpy.c ft_strnstr.c ft_strlen.c
OBJ_FILES = $(SRCS:.c=.o)


all: $(NAME)
$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
