# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 12:27:44 by nlewicki          #+#    #+#              #
#    Updated: 2024/11/11 11:54:46 by nlewicki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Account.cpp \
	  tests.cpp \


COMPILER = g++
FLAGS = -Wall -Wextra -Werror -std=c++17
OBJ = $(SRC:.cpp=.o)
NAME = leak_information

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
