#ifndef BASE_HPP
#define BASE_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"  // Red for A
#define GREEN   "\033[32m"  // Green for B
#define BLUE    "\033[34m"  // Blue for C
#include <iostream>

class Base {
	public :
		static Base  *generate(void);
		void	identify(Base *p);
		void	identify(Base &p);
		virtual ~Base( void );
};

#endif
