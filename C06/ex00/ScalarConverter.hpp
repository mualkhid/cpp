#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include <cmath>
#include <limits>
#include <iomanip>


class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const & src);
        ScalarConverter& operator=(ScalarConverter const & src);
        ~ScalarConverter();
    public:
        static void    toChar(std::string input);
        static void    toInt(std::string input);
        static void    toFloat(std::string input);
        static void    toDouble(std::string input);
        
        static void    convert( std::string input);
};

#endif