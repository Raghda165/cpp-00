# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 12:36:33 by ryagoub           #+#    #+#              #
#    Updated: 2025/01/09 20:27:56 by ryagoub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPPFILES = megaphone.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++

all: $(NAME)

$(NAME):
	$(CPP) $(CFLAGS) $(CPPFILES) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
