# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 20:17:06 by ioleinik          #+#    #+#              #
#    Updated: 2021/11/04 22:23:30 by ioleinik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -g

RM			= rm -f

NAME		= phonebook

SRC			= main.cpp 

OBJ			= ${SRC:.cpp=.o}

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(CFLAGS) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re