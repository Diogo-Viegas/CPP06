#include "../inc/ScalarConverter.hpp"
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
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl; 
        return; 
    }
    //if its a char...
    if(literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
    {
        char c = literal[0];
        std::cout << "char: " << c << std::endl;
        std::cout << "int: " << static_cast <int>(c) << std::endl;
        std::cout << "float: " << static_cast <float>(c) << std::endl;
        std::cout << "double: " << static_cast <double>(c) << std::endl;
        return;
    }
    char *endstr;
    double value = std::strtod(literal.c_str(), &endstr);

    if(endstr == literal)
    {
      
    }
    if(*endstr != '\0')
    {
        if(!(*endstr == 'f' && *(endstr + 1) == '\0'))
        {
            std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
            return;
        }
    }
    std::cout << std::fixed << std::setprecision(1);
//+++++++++++++++ CHAR +++++++++++++++++++
    if(value < 0 || value > 255)
    {
        std::cout << "char: impossible" << std::endl;
    }
    else if(!std::isprint(static_cast <char>(value)))
    {
        std::cout << "char: Non displayable" << std::endl;
    }
    else
    {
        std::cout << "char: '" << static_cast <char>(value) << "'" << std::endl; 
    }
//+++++++++++++++ INT +++++++++++++++++++
    if(value < INT_MIN || value > INT_MAX)
    {
        std::cout << "int: impossible" << std::endl;
    }
    else
    {
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    }
//+++++++++++++++ FLOAT +++++++++++++++++++
    std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
////+++++++++++++++ DOUBLE +++++++++++++++++++
    std::cout << "double: " << value << std::endl;
}



