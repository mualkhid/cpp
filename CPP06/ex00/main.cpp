
#include "ScalarConverter.hpp"

int main(int ac, char **av) {
	if (ac > 2 || !av[1]) {
		std::cout << "Error! One argument only" << std::endl;
		return (0);
	}
	ScalarConverter::convert(av[1]);
}
