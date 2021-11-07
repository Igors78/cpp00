# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 20:17:06 by ioleinik          #+#    #+#              #
#    Updated: 2021/11/06 23:23:44 by ioleinik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			= clang++
CXXFLAGS		= -Wall -Wextra -Werror -I.

RM			= rm -f

NAME		= tests

SRC			= tests.cpp Account.cpp

INC			= Account.hpp

OBJ			= ${SRC:.cpp=.o}

TESTOUT		= 19920104_091532.log

MYOUT		= my.log

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

test: 		all
			./$(NAME) | cut -c18- > $(MYOUT)
			cut -c18- $(TESTOUT) | diff $(MYOUT) -

.PHONY: all clean fclean re