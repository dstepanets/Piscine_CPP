# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dstepane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:05:25 by dstepane          #+#    #+#              #
#    Updated: 2019/07/03 19:05:27 by dstepane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= iter
CC			= clang++
FLAGS		= -g -Wall -Wextra -Werror -std=c++98 -Wconversion

OBJ_DIR		= ./obj/

SRC			=	iter.cpp

HPP			=	

OBJ 		= $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32m\033[100m\033[1m<iter> executable compiled.\033[0m"

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: %.cpp $(HPP)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "	\033[96m$@\033[0m"

clean:
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "\033[31m<iter> object files removed.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31m<iter> executable removed.\033[0m"

re: fclean all

.PHONY: all clean fclean re

