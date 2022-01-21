# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 10:22:49 by fballest          #+#    #+#              #
#    Updated: 2022/01/21 11:20:27 by fballest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FILE NAME
NAME = Human

# SOURCES AND OBJECTS
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRC:.cpp=.o)

# COMPILATION
CC = clang++
CFLAGS = -Wall -Wextra -Werror

# REMOVE FILES INSTRUCTION
RM = rm -rf

#COLOURS DEFINITION
BLUE = \033[0;34m
GREEN = \033[1;32m
RESET = \033[0m

all: $(NAME)
$(NAME): $(OBJS)
	@echo "$(BLUE)==========CREATING HUMAN==========$(RESET)"
	@$(CC) $(CFLAGS) ${OBJS} -o ${NAME}
	@echo "Human file done"
	@echo "$(GREEN)==========WELLDONE==========$(RESET)"
	@echo "Success creating Human file"

clean:
	@$(RM) $(OBJS)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success normal cleaning of Human"

re:	clean all

fclean:
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success full cleaning of Human"

.PHONY: all clean fclean re shell
