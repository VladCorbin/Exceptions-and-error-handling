#include <iostream>
#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(const std::string& n, int a, int b, int c, int A, int B, int C) : Triangle()
{
	bool equ_angles = (A == C);
	bool equ_sides = (a == c);

	if (!equ_angles) throw Figure_err("Углы A и С не равны!");
	if (!equ_sides) throw Figure_err("Стороны A и С не равны!");
}