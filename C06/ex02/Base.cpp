#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// Base  *Base::generate(void) {
// 	srand(time(0));
// 	if ((rand()) % 3 == 0)
// 		return (new A);
// 	else if ((rand()) % 3 == 1)
// 		return (new B);
// 	return (new C);
// }

// void	Base::identify(Base *p) {
// 	Base *child = dynamic_cast<A*>(p);
// 	if (child != NULL)
// 		std::cout << "pointer is type A" << std::endl;
// 	child = dynamic_cast<B*>(p);
// 	if (child != NULL)
// 		std::cout << "pointer is type B" << std::endl;
// 	child = dynamic_cast<C*>(p);
// 	if (child != NULL)
// 		std::cout << "pointer is type C" << std::endl;
// }

// void	Base::identify(Base &p) {
// 	try {
// 		Base &child = dynamic_cast<A&>(p);
// 		(void)child;
// 		std::cout << "reference is type A" << std::endl;
// 	}
// 	catch (std::exception &e) {

// 	}
// 	try {
// 		Base &child = dynamic_cast<B&>(p);
// 		(void)child;
// 		std::cout << "reference is type B" << std::endl;
// 	}
// 	catch (std::exception &e) {

// 	}
// 	try {
// 		Base &child = dynamic_cast<C&>(p);
// 		(void)child;
// 		std::cout << "reference is type C" << std::endl;
// 	}
// 	catch (std::exception &e) {

// 	}
// }

// Base::~Base(void) {
// 	std::cout << "Destructor Base Called" << std::endl;
// }




Base *Base::generate(void) {
    srand(time(0));
    if ((rand()) % 3 == 0)
        return (new A);
    else if ((rand()) % 3 == 1)
        return (new C);
    return (new B);
}

void Base::identify(Base *p) {
    Base *child = dynamic_cast<A*>(p);
    if (child != NULL)
        std::cout << RED << "Pointer is type A" << RESET << std::endl;

    child = dynamic_cast<B*>(p);
    if (child != NULL)
        std::cout << GREEN << "Pointer is type B" << RESET << std::endl;

    child = dynamic_cast<C*>(p);
    if (child != NULL)
        std::cout << BLUE << "Pointer is type C" << RESET << std::endl;
}

void Base::identify(Base &p) {
    try {
        Base &child = dynamic_cast<A&>(p);
        (void)child;
        std::cout << RED << "Reference is type A" << RESET << std::endl;
    }
    catch (std::exception &e) {}

    try {
        Base &child = dynamic_cast<B&>(p);
        (void)child;
        std::cout << GREEN << "Reference is type B" << RESET << std::endl;
    }
    catch (std::exception &e) {}

    try {
        Base &child = dynamic_cast<C&>(p);
        (void)child;
        std::cout << BLUE << "Reference is type C" << RESET << std::endl;
    }
    catch (std::exception &e) {}
}

Base::~Base(void) {
    std::cout << "Destructor Base Called" << std::endl;
}