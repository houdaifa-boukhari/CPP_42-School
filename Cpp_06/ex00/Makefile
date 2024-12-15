NAME = convert
HEADER = ScalarConverter.hpp
CPP = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp ScalarConverter.cpp
OBJS = $(SRC:.cpp=.o)
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS) : $(HEADER)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
