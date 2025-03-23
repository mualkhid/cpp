#include "Bureaucrat.hpp"

int main()
{
	try {
    	Bureaucrat *munia = new Bureaucrat("munia", 7);
		std::cout << *munia;
		munia->increment();
		std::cout << *munia;
		munia->increment();
		std::cout << *munia;
		munia->increment();
		std::cout << *munia;
		delete munia;
	} catch (std::exception& a) {
		std::cout << a.what();
	}
}