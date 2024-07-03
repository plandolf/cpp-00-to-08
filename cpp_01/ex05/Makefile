# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 12:20:09 by plandolf          #+#    #+#              #
#    Updated: 2024/02/02 13:08:00 by plandolf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRC = Harl.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

$(OBJ): $(SRC)
	c++ $(FLAGS) -c $(SRC)

$(NAME): $(OBJ)
	c++ $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all