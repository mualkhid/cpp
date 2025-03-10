#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try{
		Bureaucrat* ab = new Bureaucrat("ab", 10);
		Bureaucrat* ac = new Bureaucrat("ac", 9);
		Form* cd = new Form("cd", 10, 30);

		// std::cout << *cd;
		try {
			ab->signForm(*cd);
		} catch (std::exception& e) {
			std::cout << e.what()<< std::endl;
		}
		// std::cout << *cd;
		try {
			cd->beSigned(*ac);
		} catch (std::exception& e) {
			std::cout << e.what();
		}
		delete ab;
		delete cd;
		delete ac;
	}
	catch (std::exception& e) {
			std::cout << e.what();
	}
	return 0;
}