SRC			=	Contact.cpp		\
				PhoneBook.cpp	\
				main.cpp
OBJ			=	$(SRC:.cpp=.o)
NAME		=	PhoneBook
CXX			= 	clang++
CXXFLAGS	= 	-Wextra -Wall -Werror -Wpedantic -g -fsanitize=address

all		: $(NAME)

-include  $(SRC:.cpp=.d)

%.o		: %.cpp Makefile
	$(CXX) $(CXXFLAGS) -MMD -c $<

$(NAME)	: $(OBJ) Makefile
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean	:
	$(RM) $(OBJ)
	$(RM) $(SRC:.cpp=.d)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
