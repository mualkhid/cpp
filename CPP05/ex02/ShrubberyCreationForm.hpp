
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class Shrubbery : public AForm {
	private :
		st_	target;
	public :
		Shrubbery( void );
		Shrubbery( st_ target );
		Shrubbery( const Shrubbery &cpy );
		Shrubbery &operator=(const Shrubbery &b);
		void	execute( Bureaucrat const &executor ) const;
		~Shrubbery( void );
};

#endif