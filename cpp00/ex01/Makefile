# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 13:46:52 by ryagoub           #+#    #+#              #
#    Updated: 2024/12/09 14:02:45 by ryagoub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CPPFILES = phonebook.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
OFILES = $(CPPFILES:.cpp=.o)
CPPC = g++

all: $(NAME)

$(NAME): $(OFILES)
	$(CPPC) $(CFLAGS) $(CPPFILES) -o $(NAME)

%.o: %.cpp
	$(CPPC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
