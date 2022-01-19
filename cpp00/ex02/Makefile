# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fballest <fballest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 10:22:49 by fballest          #+#    #+#              #
#    Updated: 2022/01/19 13:15:29 by fballest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FILE NAME
NAME = Account

# SOURCES AND OBJECTS
SRC = Account.cpp tests.cpp
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
	@echo "$(BLUE)==========CREATING ACCOUNT==========$(RESET)"
	@$(CC) $(CFLAGS) ${OBJS} -o ${NAME}
	@echo "Account file done"
	@echo "$(GREEN)==========WELLDONE==========$(RESET)"
	@echo "Success creating Account file"

clean:
	@$(RM) $(OBJS)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success normal cleaning of Account"

re:	clean all

fclean:
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo "$(GREEN)==========REMOVED==========$(RESET)"
	@echo "Success full cleaning of Account"

.PHONY: all clean fclean re shell
