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

 ./RPN "5 1 2 + 4 * + 3 -" 

Step-by-Step Evaluation:
Push 5 onto the stack: [5]
Push 1 onto the stack: [5, 1]
Push 2 onto the stack: [5, 1, 2]
Encounter +, pop 2 and 1, push 1 + 2 = 3: [5, 3]
Push 4 onto the stack: [5, 3, 4]
Encounter *, pop 4 and 3, push 3 * 4 = 12: [5, 12]
Encounter +, pop 12 and 5, push 5 + 12 = 17: [17]
Push 3 onto the stack: [17, 3]
Encounter -, pop 3 and 17, push 17 - 3 = 14: [14]
The final result is 14.
*/