#pragma once
#include "Triangle.h"
#include "FigureError.h"

class right_angled_triangle : public Triangle // Прямоугольный треугольник
{
public: right_angled_triangle(const std::string& n, int a, int b, int c, int A, int B, int C);
};