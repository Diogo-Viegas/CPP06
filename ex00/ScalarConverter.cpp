#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}
ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
    (void) copy;
}   
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void) other;
    return (*this);
}

void ScalarConverter::convert(const std::string &literal)
{
    //pseudo-literals
    if(literal == "nanf" || literal == "nan" )
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl; 
        return;
    }
    if(literal == "+inf" || literal == "+inff" || literal == "inf" || literal == "inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl; 
        return;
    }
    if(literal == "-inf" || literal == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl; 
        return; 
    }
    if(literal.length() == 1 && std::isprint(literal[0] && !std::isdigit(literal[0])))
    {
        char c = literal[0];
        std::cout << "char: " << c << std::endl;
        std::cout << "int: " << static_cast <int>(c) << std::endl;
        std::cout << "float: " << static_cast <float>(c) << std::endl;
        std::cout << "double: " << static_cast <double>(c) << std::endl;
        return;
    }
}



