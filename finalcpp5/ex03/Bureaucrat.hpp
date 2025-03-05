
#define RESET_COLOR "\033[0m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"

#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

#define	st_ std::string

class AForm ;

class Bureaucrat {
	private :
		st_ const	name;
		int			grade;
	public :
		Bureaucrat( void );
		Bureaucrat( st_ const name, int grade );
		Bureaucrat &operator=(const Bureaucrat &b);
		void	signForm(AForm &grades);
		void	increment();
		void	decrement();
		void	set_grade( int grade_ );
		st_		get_name( void ) const ;
		int		get_grade( void ) const ;
		void	executeForm(AForm const & form);
		Bureaucrat( const Bureaucrat &copy );
		~Bureaucrat( void );

	/*-------------------nested classes-------------------*/
	class	GradeTooHighException : public std::exception {
		public :
			virtual const char* what() const throw();
	};
	class	GradeTooLowException : public std::exception {
		public :
			virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat& dt);

#endif