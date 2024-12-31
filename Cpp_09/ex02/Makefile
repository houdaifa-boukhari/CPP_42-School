NAME = PmergeMe
HEADER = PmergeMe.hpp
CPP = c++
CXXFLAGS =  -g -fsanitize=address
SRC = main.cpp PmergeMe.cpp
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
