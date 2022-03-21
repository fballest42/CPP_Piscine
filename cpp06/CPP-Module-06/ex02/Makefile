# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
<<<<<<< HEAD:cpp08/CPP-Module-08/ex00/Makefile
#    Created: 2021/12/21 20:56:31 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/29 09:26:48 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = easyfind
=======
#    Created: 2021/12/21 20:46:51 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/29 09:25:46 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify
>>>>>>> d6ea4c485ef3dc59b400dafe677bb105d9b22120:cpp06/CPP-Module-06/ex02/Makefile

CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

<<<<<<< HEAD:cpp08/CPP-Module-08/ex00/Makefile
SRCS = main.cpp
=======
SRCS = main.cpp Base.cpp
>>>>>>> d6ea4c485ef3dc59b400dafe677bb105d9b22120:cpp06/CPP-Module-06/ex02/Makefile

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
