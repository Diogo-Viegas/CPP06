#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits.h>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter&operator=(const ScalarConverter &other);
        ~ScalarConverter();
    public:
        static void convert(const std::string &literal);

};
#endif