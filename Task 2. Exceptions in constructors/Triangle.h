#pragma once
#include <string>
#include "Figure.h"
#include "print_q.h"

class Triangle : public Figure // базовый треугольник
{
protected:
    int sides[3]; // стороны
    int angles[3]; // углы
public:
    Triangle(const std::string& n, int a, int b, int c, int A, int B, int C);
    Triangle();
    void print_info() override;
};