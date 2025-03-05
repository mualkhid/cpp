#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#define st_	std::string

class Intern {
	private:
		st_		target;
	public:
		Intern( void );
		Intern( st_ target );
		AForm	*makeForm( st_ type, st_ target );
		Intern &operator=(const Intern &b);
		Intern( const Intern &cpy );
		~Intern();
};

#endif