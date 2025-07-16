# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 23:27:50 by sinseungheo       #+#    #+#              #
#    Updated: 2025/07/12 14:58:57 by sinseungheo      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFILE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c
OBJS = $(CFILE:.c=.o)
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
 
all : $(NAME)
 
$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) $< -o $@
clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all
 
.PHONY : all clean fclean re