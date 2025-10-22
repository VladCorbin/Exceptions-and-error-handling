#include <iostream>
#include "equilateral_triangle.h"


equilateral_triangle::equilateral_triangle(const std::string& n, int a, int b, int c, int A, int B, int C) : Triangle()
{
	bool equ_angles = (A == 60 && B == 60 && C == 60);
	bool equ_sides = ((a == b) && (b == c) && (a == c));

	if (!equ_angles) throw Figure_err("Углы не равны 60!");
	if (!equ_sides) throw Figure_err("Стороны не равны между собой!");
}