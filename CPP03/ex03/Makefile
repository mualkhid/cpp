NAME = DiamondTrap

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = DiamondTrap.cpp FragTrap.cpp main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = FragTrap.hpp ClapTrap.hpp ScavTrap.hpp DiamondTrap.hpp

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
