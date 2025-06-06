
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("munia"), grade(0) {
	std::cout << "Default Bureaucrat Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat( const st_ name_, int grade_ ) : name(name_), grade(grade_) {
	std::cout << "Parametrized Bureaucrat Constructor Called" << std::endl;
	if (grade_ <= 0) 
		throw(GradeTooHighException());
	if (grade_ > 150)
		throw(GradeTooLowException());
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b) {
		this->grade = b.grade;
	}
	return (*this);
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy ) {
	*this = copy;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade Is Too Low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade Is Too High");
}

void	Bureaucrat::set_grade( int grade_ ) {
	if (grade_ <= 0) 
		throw(GradeTooHighException());
	else if (grade_ > 150)
		throw(GradeTooLowException());
	else
		grade = grade_;
}

void	Bureaucrat::executeForm(AForm const &form) {
	try {
		form.execute(*this);
	}
	catch (std::exception &e) {
		std::cout << name << " didnt execute " << form.get_name() << std::endl;
		return ;
	}
	std::cout << name << " executed " << form.get_name() << std::endl;
}

void	Bureaucrat::signForm(AForm &grades) {
	try {
		grades.beSigned(*this);
	}
	catch(std::exception &e) {
		std::cout << BOLD_RED << this->get_name() << " couldn't sign " << grades.get_name() << " because " << e.what() << std::endl << RESET_COLOR;
		return ;
	}
	std::cout << BOLD_GREEN << this->get_name() << " sign " << grades.get_name() << std::endl << RESET_COLOR;
}

const st_	Bureaucrat::get_name( void ) const {
	return (name);
}

int		Bureaucrat::get_grade( void ) const {
	return (grade);
}

void	Bureaucrat::increment() {
	int		stock = 0;
	stock = this->grade - 1;
	if (stock <= 0)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade = stock;
}

void	Bureaucrat::decrement() {
	int		stock = 0;
	stock = this->grade + 1;
	if (stock > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade = stock;
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat& dt) {
	os << dt.get_name() << ", bureaucrat grade " << dt.get_grade();
	return (os);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Default Bureaucrat Destructor Called" << std::endl;
}