NAME = ZombiesHord

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

SRC = main.cpp zombieHord.cpp Zombie.cpp

HEADER = Zombie.hpp

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re
