#include <iostream>
#include "Figure.h"

Figure::Figure(const std::string& n, int num)
{
	if (num_sides == 0) throw Figure_err("Bad number of sides");
}