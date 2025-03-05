
#include "RobotomyRequestForm.hpp"

Robotomy::Robotomy( void ) : AForm("default", 72, 45), target("Default") {
	std::cout << "Robotomy Default Constructor Called" << std::endl;
}

Robotomy::Robotomy( st_ target_ ) : AForm(target_, 72, 45), target(target_) {
	std::cout << "Robotomy Constructor Called" << std::endl;
}

Robotomy::Robotomy( const Robotomy &cpy ): AForm(cpy) {
	std::cout << "Robotomy copy Constructor called" << std::endl;
	*this = cpy;
}

Robotomy &Robotomy::operator=(const Robotomy &b) {
	std::cout << "Robotomy Copy assignment operator called" << std::endl;
	(void)b;
	return (*this);
}

void	Robotomy::execute( Bureaucrat const &executor ) const {
	if (!get_sign() && executor.get_grade() > get_grade())
		throw(GradeTooLowException());
	srand(time(0));
	if ((rand()) % 2 == 0)
		std::cout << GREEN << this->target << " has been robotomized " << RESET_COLOR << std::endl;
	else
		std::cout << RED << this->target << " robotomy failed " << RESET_COLOR << std::endl;
}

Robotomy::~Robotomy( void ) {
	std::cout << "Robotomy Destructor called" << std::endl;
}