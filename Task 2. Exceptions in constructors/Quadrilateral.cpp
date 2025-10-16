#include <iostream>
#include "Quadrilateral.h"

Quadrilateral::Quadrilateral() : Figure("Четырёхугольник")
{
    sides[0] = 10; sides[1] = 20; sides[2] = 30; sides[3] = 40;
    angles[0] = 50; angles[1] = 60; angles[2] = 70; angles[3] = 80;
}

Quadrilateral::Quadrilateral(const std::string& n, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(n)
{
    sides[0] = a; sides[1] = b; sides[2] = c; sides[3] = d;
    angles[0] = A; angles[1] = B; angles[2] = C; angles[3] = D;
}

void Quadrilateral::print_info()
{
    int size{ 4 }; // количество углов
    std::cout << name << ":\n";
    std::cout << "Стороны: "; print_q(sides, size);
    std::cout << "Углы: "; print_q(angles, size);
}

void print_q(const int* arr, int size);