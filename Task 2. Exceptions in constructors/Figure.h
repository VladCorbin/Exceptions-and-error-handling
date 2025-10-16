#pragma once
#include <string>

class Figure
{
protected:
    std::string name;
public:
    Figure(const std::string& n);
    virtual void print_info() = 0;
};
