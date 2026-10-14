# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdrazek <kdrazek@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/29 17:30:33 by kdrazek           #+#    #+#              #
#    Updated: 2026/07/29 17:48:58 by kdrazek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = phonebook
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRCS        = main.cpp PhoneBook.cpp Contact.cpp
HEADERS     = PhoneBook.hpp Contact.hpp
OBJS        = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re