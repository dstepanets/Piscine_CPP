# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dstepane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/24 19:00:22 by dstepane          #+#    #+#              #
#    Updated: 2019/06/24 19:00:24 by dstepane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= phonebook
CC			= clang++
FLAGS		= -g -Wall -Wextra -Werror -std=c++98

SRC			=	phonebook.cpp \
				add_contact.cpp \
				search.cpp \
				Contact.class.cpp

HEADS		=	phonebook.hpp \
				Contact.class.hpp

OBJ_DIR		= ./obj/
OBJ 		= $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "\033[32m\033[100m\033[1mPhonebook executable compiled.\033[0m"

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: %.cpp $(HEADS)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "	\033[96m$@\033[0m"

clean:
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "\033[31mPhonebook object files removed.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31mPhonebook executable removed.\033[0m"

re: fclean all

.PHONY: all clean fclean re
