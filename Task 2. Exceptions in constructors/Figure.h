#pragma once
#include <string>
#include "FigureError.h"

class Figure
{
protected:
    std::string name;
    int num_sides;
public:
    Figure(const std::string& n, int num);
    virtual void print_info() = 0;
};
