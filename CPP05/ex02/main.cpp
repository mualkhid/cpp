
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat	pr("m", 25);
	AForm	*pt = new Shrubbery("munia");
	AForm	*pts = new Robotomy("munia");
	AForm	*pte = new Presidential("munia");
	pr.executeForm(*pt);
	pr.executeForm(*pts);
	pr.executeForm(*pte);
}