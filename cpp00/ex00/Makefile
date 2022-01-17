# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 10:22:49 by fballest          #+#    #+#              #
#    Updated: 2022/01/12 11:16:18 by fballest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FILE NAME
NAME = megaphone

# SOURCES AND OBJECTS
SRC = megaphone.cpp
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
	@echo "$(BLUE)==========CREATING MEGAPHONE==========$(RESET)"
	@$(CC) $(CFLAGS) ${OBJS} -o ${NAME}
	@echo "Megaphone file done"
	@echo "$(GREEN)==========WELLDONE==========$(RESET)"
	@echo "Success creating megaphone file"

clean:
	@$(RM) $(OBJS)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success normal cleaning of megaphone"

re:	clean all

fclean:
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success full cleaning of megaphone"

.PHONY: all clean fclean re shell addsuffix
