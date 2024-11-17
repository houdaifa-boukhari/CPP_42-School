NAME = Animal
HEADER = ./INCLUDES_EX00/Animal.hpp ./INCLUDES_EX00/Cat.hpp ./INCLUDES_EX00/Dog.hpp
CPP = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./SRCS/Animal.cpp ./SRCS/Cat.cpp ./SRCS/Dog.cpp  ./SRCS/WrongAnimal.cpp ./SRCS/WrongCat.cpp main.cpp
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
