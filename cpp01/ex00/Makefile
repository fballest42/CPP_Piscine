# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 10:22:49 by fballest          #+#    #+#              #
#    Updated: 2022/01/20 10:50:39 by fballest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FILE NAME
NAME = Zombie

# SOURCES AND OBJECTS
SRC = main.cpp ClassZombie.cpp newZombie.cpp randomChump.cpp
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
	@echo "$(BLUE)==========CREATING ZOMBIE==========$(RESET)"
	@$(CC) $(CFLAGS) ${OBJS} -o ${NAME}
	@echo "Zombie file done"
	@echo "$(GREEN)==========WELLDONE==========$(RESET)"
	@echo "Success creating Zombie file"

clean:
	@$(RM) $(OBJS)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success normal cleaning of Zombie"

re:	clean all

fclean:
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success full cleaning of Zombie"

.PHONY: all clean fclean re shell
