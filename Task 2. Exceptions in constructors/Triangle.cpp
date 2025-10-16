#include <iostream>
#include "Triangle.h"


Triangle::Triangle(const std::string& n, int a, int b, int c, int A, int B, int C) : Figure(n)
{
    sides[0] = a; sides[1] = b; sides[2] = c;
    angles[0] = A; angles[1] = B; angles[2] = C;
}

Triangle::Triangle() : Figure("Треугольник")
{
    sides[0] = 10; sides[1] = 20; sides[2] = 30;
    angles[0] = 50; angles[1] = 60; angles[2] = 70;
}

void Triangle::print_info()
{
    int size{ 3 }; // количество углов
    std::cout << name << ":\n";
    std::cout << (check() ? "Правильная\n" : "Неправильная\n");
    std::cout << "Стороны: "; print_q(sides, size);
    std::cout << "Углы: "; print_q(angles, size);
}


void print_q(const int* arr, int size);
