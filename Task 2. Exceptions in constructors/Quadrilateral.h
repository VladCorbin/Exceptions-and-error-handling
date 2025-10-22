#pragma once
#include "Figure.h"
#include "print_q.h"
#include "FigureError.h"

class Quadrilateral : public Figure // базовый четырёхугольник
{
protected:
    int sides[4]; // стороны
    int angles[4]; // углы
public:
    Quadrilateral();
    Quadrilateral(const std::string& n, int a, int b, int c, int d, int A, int B, int C, int D);

    void print_info() override;
};