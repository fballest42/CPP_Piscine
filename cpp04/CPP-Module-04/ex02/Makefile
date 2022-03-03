# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 19:56:11 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/18 21:18:07 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ideas

CXX = clang++ --std=c++98

CXXFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp

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