#include <exception>
#include <iostream> 
#include "FigureError.h"


Figure_err::Figure_err() : std::exception {}

int main()
{
    try {
        throw Figure_err();
    }
    catch (const std::exception& err)
    {
        std::cout << err.what() << std::endl;
    }
    return EXIT_SUCCESS;
}
