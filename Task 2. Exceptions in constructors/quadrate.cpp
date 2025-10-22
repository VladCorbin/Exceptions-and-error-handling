#include <iostream>
#include "quadrate.h"

quadrate::quadrate(const std::string& n, int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral() 
{
	bool equ_angles = (A == 90 && B == 90 && C == 90 && D == 90 );
	bool equ_sides = ((a == b) && (b == c) && (a == c) && (d == a) && (d == b) && (d == c));

	if (!equ_angles) throw Figure_err("Углы не равны 90!");
	if (!equ_sides) throw Figure_err("Стороны не равны между собой!");
}