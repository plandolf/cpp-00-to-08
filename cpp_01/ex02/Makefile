# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 12:19:27 by plandolf          #+#    #+#              #
#    Updated: 2024/02/01 12:27:06 by plandolf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = this_is_brain

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp

$(OBJ): $(SRC)
	clang++ $(FLAGS) -c $(SRC) -o $(OBJ)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all