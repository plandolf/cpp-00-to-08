# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 10:19:06 by plandolf          #+#    #+#              #
#    Updated: 2024/02/02 14:10:53 by plandolf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed2

SRC = Sed2.cpp main.cpp

FLAGS = -Wall -Wextra -Werror -g -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(OBJ): $(SRC)
	clang++ $(FLAGS) -c $(SRC)

$(NAME): $(OBJ)
	clang++ $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

