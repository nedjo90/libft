# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/11 15:27:46 by necatihan         #+#    #+#              #
#    Updated: 2023/07/12 11:29:30 by necatihan        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c \
						ft_strcmp.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_tolower.c \
						ft_toupper.c ft_strlen.c ft_strncat.c
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re