# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/21 20:46:51 by rcabezas          #+#    #+#              #
#    Updated: 2021/12/29 09:25:46 by rcabezas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

CXX = clang++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Base.cpp

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
