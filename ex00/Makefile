# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 20:17:06 by ioleinik          #+#    #+#              #
#    Updated: 2021/11/06 22:15:22 by ioleinik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= clang++
CXXFLAGS		= -Wall -Wextra -Werror -g

RM			= rm -f

NAME		= megaphone

SRC			= megaphone.cpp

OBJ			= ${SRC:.cpp=.o}

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

test1:
			./megaphone "shhhhh... I think the students are asleep..."

test2:
			./megaphone Damnit " ! " "Sorry students, I thought this thing was off."

test3:
			./megaphone || true

re:			fclean all

.PHONY: all clean fclean re test1 test2 test3