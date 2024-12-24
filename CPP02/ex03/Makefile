NAME	= bsp

CXX		= c++
CXXFLAGS	= -Werror -Wextra -Wall -std=c++98


SRCS	= main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@


clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
