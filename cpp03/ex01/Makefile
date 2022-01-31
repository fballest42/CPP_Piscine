# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 10:22:49 by fballest          #+#    #+#              #
#    Updated: 2022/01/31 13:46:19 by fballest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FILE NAME
NAME = ScavTrap

# SOURCES AND OBJECTS
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS = $(SRC:.cpp=.o)

# COMPILATION
CC = clang++
CFLAGS = --std=c++98 -Wall -Wextra -Werror

# REMOVE FILES INSTRUCTION
RM = rm -rf

#COLOURS DEFINITION
BLUE = \033[0;34m
GREEN = \033[1;32m
RESET = \033[0m

all: $(NAME)
$(NAME): $(OBJS)
	@echo "$(BLUE)==========CREATING $(NAME)==========$(RESET)"
	@$(CC) $(CFLAGS) ${OBJS} -o ${NAME}
	@echo "$(NAME) file done"
	@echo "$(GREEN)==========WELLDONE==========$(RESET)"
	@echo "Success creating $(NAME) file"

clean:
	@$(RM) $(OBJS)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success normal cleaning of $(NAME)"

re:	clean all

fclean:
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success full cleaning of $(NAME)"

.PHONY: all clean fclean re shell
