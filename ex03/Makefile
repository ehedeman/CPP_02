# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 13:40:23 by ehedeman          #+#    #+#              #
#    Updated: 2024/09/18 15:12:42 by ehedeman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp			\
		Fixed.cpp		\
		Point.cpp		\
		bsp.cpp

OBJS_DIR = objs/
OBJS = $(SRC:.cpp=.o)
OBJS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
HEADERS = Fixed.hpp Point.hpp
CC = g++
RM = rm -rf
MKDIR = mkdir -p
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = fixed

all: $(NAME)

$(NAME): $(OBJS_PREFIXED)
	$(CC) $(CPPFLAGS) $(OBJS_PREFIXED) -o $(NAME)

$(OBJS_DIR)%.o : %.cpp $(HEADERS)
	$(MKDIR) $(OBJS_DIR)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

leaks: 
	valgrind --leak-check=full	\
         --show-leak-kinds=all ./$(NAME)

.PHONY: all clean re fclean leaks