#include <iostream>
#include "Rectangl.h"

Rectangl::Rectangl(const std::string& n, int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral() 
{
	bool equ_angles = (A == 90 && B == 90 && C == 90 && D == 90);
	bool equ_sides = ((a + c) == (b + d));

	if (!equ_angles) throw std::runtime_error("”глы не равны 90!");
	if (!equ_sides) throw std::runtime_error("Cтороны a,c и b,d попарно не равны!");
}