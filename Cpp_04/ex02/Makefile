NAME = AAnimal
HEADER = ./INCLUDES/AAnimal.hpp ./INCLUDES_EX00/Cat.hpp ./INCLUDES_EX00/Dog.hpp ./INCLUDES/Brain.hpp
CPP = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./SRCS_EX00/Cat.cpp ./SRCS_EX00/Dog.cpp  ./SRCS_EX00/WrongAnimal.cpp \
	./SRCS_EX00/WrongCat.cpp ./SRCS/AAnimal.cpp ./SRCS/Brain.cpp main.cpp
OBJS = $(SRC:.cpp=.o)
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS) : $(HEADER)

$(OBJS) : $(HEADER)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
