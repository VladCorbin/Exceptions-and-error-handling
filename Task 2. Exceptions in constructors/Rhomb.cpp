#include <iostream>
#include "Rhomb.h"

Rhomb::Rhomb(const std::string& n, int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral() 
{
	bool equ_angles = ((A + C) == (B + D));
	bool equ_sides = ((a == b) && (b == c) && (a == c) && (d == a) && (d == b) && (d == c));

	if (!equ_angles) throw std::runtime_error("Углы A,C и B,D попарно не равны!");
	if (!equ_sides) throw std::runtime_error("Стороны не равны между собой!");
}