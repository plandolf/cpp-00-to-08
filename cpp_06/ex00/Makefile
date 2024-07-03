# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/04 14:24:14 by plandolf          #+#    #+#              #
#    Updated: 2024/05/06 11:02:22 by plandolf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRC = main.cpp ScalarConverter.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(OBJ): %.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all