
#include "RPN.hpp"

RPN::RPN() {}


RPN::RPN(const RPN& other) 
{
    *this = other;
}

RPN& RPN::operator=(const RPN& other) 
{
    if (this != &other)
        this->stack = other.stack;
    return *this;
}

RPN::~RPN() {}

bool RPN::isOperator(const std::string& token) const 
{
    return token == "+" || token == "-" || token == "*" || token == "/";
}

int RPN::performOperation(const std::string& operation, int operand1, int operand2) const 
{
    if (operation == "+") return operand1 + operand2;
    if (operation == "-") return operand1 - operand2;
    if (operation == "*") return operand1 * operand2;
    if (operation == "/") 
    {
        if (operand2 == 0) 
            throw std::runtime_error("Division by zero");
        return operand1 / operand2;
    }
    throw std::runtime_error("Invalid operator");
}

int RPN::stringToInt(const std::string& str) const 
{
    std::stringstream ss(str);
    int result;
    ss >> result;
    if (ss.fail() || !ss.eof() || result < 0 || result > 9)
        throw std::invalid_argument("Invalid integer value");
    return result;
}

int RPN::evaluate(const std::string& expression) 
{
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) 
    {
        if (isdigit(token[0]) && token.length() == 1)
            stack.push(stringToInt(token));
        else if (isOperator(token)) 
        {
            if (stack.size() < 2) 
                throw std::runtime_error("Invalid expression");
            int operand2 = stack.top(); stack.pop();
            int operand1 = stack.top(); stack.pop();
            int result = performOperation(token, operand1, operand2);
            stack.push(result);
        } 
        else
            throw std::runtime_error("Invalid input token");
    }

    if (stack.size() != 1) 
        throw std::runtime_error("Invalid expression");
    return stack.top();
}
