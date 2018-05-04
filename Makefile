# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahoussei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/03 04:19:38 by ahoussei          #+#    #+#              #
#    Updated: 2018/05/03 04:24:40 by ahoussei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAG = -Wall -Werror -Wextra -c
SRC = *.c
OFILES = *.o

all: $(NAME)

$(NAME):
		gcc $(CFLAG) $(SRC)
		ar rc $(NAME) $(OFILES)

clean:
		/bin/rm -f $(OFILES)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re

