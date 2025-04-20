#include "RPN.hpp"

int main(int ac, char** av) 
{
    if (ac != 2)
        return (std::cout << "Usage: ./RPN \"expression\"" << std::endl, 1);

    RPN rpn;
    try 
    {
        int result = rpn.evaluate(av[1]);
        std::cout << result << std::endl;
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Error " << e.what() << std::endl;
    }

    return 0;
}
