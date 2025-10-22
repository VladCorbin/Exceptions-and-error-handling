#pragma once
#include "Triangle.h"
#include "FigureError.h"

class equilateral_triangle : public Triangle // Равносторонний треугольник
{
public: equilateral_triangle(const std::string& n, int a, int b, int c, int A, int B, int C);
};