#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	try{
		Bureaucrat* a = new Bureaucrat("a", 150);
		Bureaucrat* b = new Bureaucrat("b", 20);
		Form* c = new Form("c", 30, 10);
		// std::cout << *c;
		try {
			a->signForm(*c);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		// std::cout << *c;
		try {
			c->beSigned(*b);
		} catch (std::exception& e) {
			std::cout << e.what() ;
		}
		delete a;
		delete c;
		delete b;
	}
	catch (std::exception& e) {
			std::cout << e.what();
	}
	return 0;
}