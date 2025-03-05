#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main() {
	try {
		AForm* rrf;
		AForm* ppf;
		AForm* scf;
		Intern someRandomIntern;
		Bureaucrat	a("munia", 25);
		ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		rrf->execute(a);
		ppf->execute(a);
		scf->execute(a);
		delete rrf;
	}
	catch (int) {
		return (0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}