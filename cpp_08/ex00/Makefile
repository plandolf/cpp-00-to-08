# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 12:03:59 by plandolf          #+#    #+#              #
#    Updated: 2024/05/13 12:04:15 by plandolf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Easy_find

SRC = main.cpp

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