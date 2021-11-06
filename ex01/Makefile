# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 20:17:06 by ioleinik          #+#    #+#              #
#    Updated: 2021/11/06 22:14:21 by ioleinik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= clang++
CXXFLAGS		= -Wall -Wextra -Werror -I.

RM			= rm -f

NAME		= phonebook

SRC			= main.cpp Contact.cpp Phonebook.cpp

INC			= Contact.hpp Phonebook.hpp

OBJ			= ${SRC:.cpp=.o}

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re