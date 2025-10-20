#include <iostream>
#include "Parallelogram.h"

Parallelogram::Parallelogram(const std::string& n, int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral() 
{
	bool equ_angles = (A == 90 && B == 90 && C == 90 && D == 90);
	bool equ_sides = ((a == b) && (b == c) && (a == c) && (d == a) && (d == b) && (d == c));

	if (!equ_angles) throw std::runtime_error("Углы A,C и B,D попарно не равны!");
	if (!equ_sides) throw std::runtime_error("Стороны a,c и b,d попарно не равны!");
}