# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: necatihan <necatihan@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/23 12:46:09 by nhan              #+#    #+#              #
#    Updated: 2023/07/11 15:23:30 by necatihan        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/23 12:46:09 by nhan              #+#    #+#              #
#    Updated: 2023/06/27 00:06:19 by nhan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRCS = srcs/$(wildcard *.c)
LIB = libft.a
INCDIRS = libft.h
CFLAGS = -Wall -Wextra -Werror -I $(INCDIRS)
OBJ = $(patsubst %.c, %.o, $(SRCS))

all : ${LIB}

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $^

$(LIB) : $(OBJ)
	ar rcs $(LIB) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(LIB)

re : fclean all