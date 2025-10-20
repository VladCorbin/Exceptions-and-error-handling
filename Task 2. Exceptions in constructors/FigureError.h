#pragma once
#include <exception>
#include <iostream> 

class Figure_err : public std::exception
{
public:
    Figure_err() : std::exception("Figure_err text!") {}
};
