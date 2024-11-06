# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 10:56:47 by nlewicki          #+#    #+#              #
#    Updated: 2024/11/06 10:07:14 by nlewicki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = PhoneBook.cpp \
	  Contact.cpp \
	  main.cpp \


COMPILER = g++
FLAGS = -Wall -Wextra -Werror -std=c++17
OBJ = $(SRC:.cpp=.o)
NAME = PhoneBook

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
