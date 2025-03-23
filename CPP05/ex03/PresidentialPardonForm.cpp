
#include "PresidentialPardonForm.hpp"

Presidential::Presidential( void ) : AForm("Default", 25, 5), target("Default") {
	std::cout << "Presidential Default Constructor Called" << std::endl;
}

Presidential::Presidential( st_ target_ ) : AForm(target_, 25, 5), target(target_) {
	std::cout << "Presidential Parametrized Constructor Called" << std::endl;
}

Presidential &Presidential::operator=(const Presidential &b) {
	std::cout << "Presidential Copy assignment operator called" << std::endl;
	if (this != &b)
		this->target = b.target;
	return (*this);
}

Presidential::Presidential( const Presidential &copy ): AForm(copy) {
	std::cout << "Presidential copy Constructor Called" << std::endl;
	*this = copy;
}

void	Presidential::execute( Bureaucrat const &executor ) const {
	if (!get_sign() && executor.get_grade() > get_grade())
		throw(GradeTooLowException());
	std::cout << BLUE << target << " has been pardoned by Zaphod Beeblebrox " << RESET_COLOR << std::endl;
}

Presidential::~Presidential( void ) {
	std::cout << "Presidential Destructor Called" << std::endl;
}