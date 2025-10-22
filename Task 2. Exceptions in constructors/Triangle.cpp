#include <iostream>
#include "Triangle.h"

Triangle::Triangle(const std::string& n, int a, int b, int c, int A, int B, int C) : Figure("Треугольник", 3)
{
    sides[0] = a; sides[1] = b; sides[2] = c;
    angles[0] = A; angles[1] = B; angles[2] = C;

    if ((A + B + C) != 180 ) throw Figure_err("Углы в сумме не дают 180!");
}

void Triangle::print_info()
{
    int size{ 3 }; // количество углов
    std::cout << Figure::name << ":\n";
    std::cout << "Стороны: "; print_q(sides, size);
    std::cout << "Углы: "; print_q(angles, size);
}


void print_q(const int* arr, int size);
