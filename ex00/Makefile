# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 14:04:23 by nlewicki          #+#    #+#              #
#    Updated: 2024/10/30 14:08:38 by nlewicki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

COMPILER = g++
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.cpp=.o)
NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

