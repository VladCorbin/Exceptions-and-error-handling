#include <iostream>
#include "right_angled_triangle.h"

right_angled_triangle::right_angled_triangle(const std::string& n, int a, int b, int c, int A, int B, int C) : Triangle() 
{
	bool equ_angles = (C == 90);

	if (!equ_angles) throw Figure_err("Угол С не равен 90!");
}