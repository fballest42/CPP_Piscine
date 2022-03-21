# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
<<<<<<< HEAD:cpp07/CPP-Module-07/ex01/Makefile
#    Created: 2021/12/19 20:10:12 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/29 09:25:04 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
=======
#    Created: 2021/12/19 12:37:41 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/29 09:23:44 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
>>>>>>> d6ea4c485ef3dc59b400dafe677bb105d9b22120:cpp06/CPP-Module-06/ex00/Makefile

CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

<<<<<<< HEAD:cpp07/CPP-Module-07/ex01/Makefile
SRCS = main.cpp
=======
SRCS = main.cpp Convert.cpp
>>>>>>> d6ea4c485ef3dc59b400dafe677bb105d9b22120:cpp06/CPP-Module-06/ex00/Makefile

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
