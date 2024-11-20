NAME = Interface
HEADER = ./INCLUDES/AMateria.hpp ./INCLUDES/Character.hpp ./INCLUDES/Cure.hpp ./INCLUDES/Ice.hpp \
	./INCLUDES/MateriaSource.hpp ./INCLUDES/MyList.hpp
CPP = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./SRCS/AMateria.cpp ./SRCS/Character.cpp  ./SRCS/Cure.cpp \
	./SRCS/Ice.cpp ./SRCS/MateriaSource.cpp ./SRCS/Mylist.cpp main.cpp
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
