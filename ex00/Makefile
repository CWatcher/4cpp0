SRC			= megaphone.cpp
NAME		= megaphone
CXX			= clang++
CXXFLAGS	= -Wextra -Wall -Werror -Wpedantic -g -std=c++98

$(NAME)	: $(SRC) Makefile
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

all		: $(NAME)

clean	:

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
