
#ifndef ROBOOTOMYREQUESTFORM_HPP
#define ROBOOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class Robotomy : public AForm {
	private :
		st_ target;
	public :
		Robotomy( void );
		Robotomy( st_ target_ );
		Robotomy( const Robotomy &cpy );
		Robotomy &operator=(const Robotomy &b);
		void	execute( Bureaucrat const &executor ) const;
		~Robotomy( void );
};

#endif