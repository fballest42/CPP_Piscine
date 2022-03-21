# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/22 11:32:09 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/30 10:34:04 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutantstack

CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp mutantstack.cpp

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
