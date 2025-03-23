
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class Presidential : public AForm {
	private :
		st_	target;
	public :
		Presidential( void );
		Presidential( st_ target );
		Presidential &operator=(const Presidential &b);
		Presidential( const Presidential &copy );
		void	execute( Bureaucrat const &executor ) const ;
		~Presidential( void );
};

#endif