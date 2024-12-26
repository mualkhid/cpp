NAME = ScavTrap

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ScavTrap.cpp main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = ScavTrap.hpp ClapTrap.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re
