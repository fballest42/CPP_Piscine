# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 10:22:49 by fballest          #+#    #+#              #
#    Updated: 2022/02/22 14:36:40 by fballest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FILE NAME
NAME = replace

# SOURCES AND OBJECTS
SRC = main.cpp
OBJS = $(SRC:.cpp=.o)

# COMPILATION
CC = clang++
CFLAGS = -Wall -Wextra -Werror --std=c++98

# REMOVE FILES INSTRUCTION
RM = rm -rf

#COLOURS DEFINITION
BLUE = \033[0;34m
GREEN = \033[1;32m
RESET = \033[0m

all: $(NAME)
$(NAME): $(OBJS)
	@echo "$(BLUE)==========CREATING REPLACE==========$(RESET)"
	@$(CC) $(CFLAGS) ${OBJS} -o ${NAME}
	@echo "replace file done"
	@echo "$(GREEN)==========WELLDONE==========$(RESET)"
	@echo "Success creating replace file"

clean:
	@$(RM) $(OBJS)
	@$(RM) prueba.replace
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success normal cleaning of replace"

re:	clean all

fclean:
	@$(RM) $(OBJS)
	@$(RM) prueba.replace
	@$(RM) $(NAME)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success full cleaning of replace"

.PHONY: all clean fclean re shell
