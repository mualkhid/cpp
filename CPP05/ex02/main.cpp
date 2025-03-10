#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

// int main(void)
// {
// 	 try {
//         Bureaucrat a("a", 130);
//         Bureaucrat b("b", 140);
// 		ShrubberyCreationForm c("c");
//         std::cout << c << std::endl;
//         a.signForm(c);
//         std::cout << std::endl;
// 		a.executeForm(c);
//     }
//     catch (const std::exception& e) {
//         std::cout << e.what() << std::endl;
//     }
// }


int main() {
	Bureaucrat	pr("m", 25);
	AForm	*pt = new ShrubberyCreationForm("muniashrub");
	AForm	*pts = new RobotomyRequestForm("muniarobot");
	AForm	*pte = new PresidentialPardonForm("muniapres");
	pr.executeForm(*pt);
	pr.executeForm(*pts);
	pr.executeForm(*pte);
}