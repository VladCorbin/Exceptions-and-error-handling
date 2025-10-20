#include <iostream>
#include "Figure.h"

Figure::Figure(const std::string& n, int num)
{
	if (num_sides == 0) throw std::runtime_error("Bad number of sides");
}