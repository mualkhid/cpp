#include "Array.hpp"

int main()
{
	try {
		Array<int> a(5);
		a[0] = 15;
		std::cout << a[0] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
