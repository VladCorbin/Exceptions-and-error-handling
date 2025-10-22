#include <exception>
#include <iostream> 
#include "FigureError.h"

Figure_err::Figure_err(const std::string& message) : std::exception(message.c_str()) 
{
    try {
        throw Figure_err("Figure_err text!");
    }
    catch (const std::exception& err)
    {
        std::cout << err.what() << std::endl;
    }
}


   

