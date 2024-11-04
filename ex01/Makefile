# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 10:56:47 by nlewicki          #+#    #+#              #
#    Updated: 2024/11/04 12:57:46 by nlewicki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = phonebook.cpp \
	  contact.cpp \
	  main.cpp \


COMPILER = g++
FLAGS = -Wall -Wextra -Werror -std=c++17
OBJ = $(SRC:.cpp=.o)
NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
