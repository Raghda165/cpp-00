# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 12:36:33 by ryagoub           #+#    #+#              #
#    Updated: 2024/12/09 13:59:40 by ryagoub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPPFILES = megaphone.cpp
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
