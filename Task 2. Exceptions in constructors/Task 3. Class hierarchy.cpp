#include <iostream>
#include <string>
#include <Windows.h>
#include "Triangle.h"
#include "Quadrilateral.h"
#include "right_angled_triangle.h"
#include "Isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "Rectangl.h"
#include "quadrate.h"
#include "Parallelogram.h"
#include "Rhomb.h"
#include "print_q.h"



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    Triangle tri; // базовый триугольник
    right_angled_triangle rig; // Прямоугольный треугольник
    Isosceles_triangle Iso; // Равнобедренный треугольник
    equilateral_triangle equ; // Равносторонний треугольник

    Quadrilateral quadril; // базовый четырёхугольник
    Rectangl Rec; // Прямоугольник
    quadrate qua; // Квадрат
    Parallelogram Par; // Параллелограмм
    Rhomb Rho; // Ромб

    Figure* group[9];
    group[0] = &tri; group[1] = &rig; group[2] = &Iso; group[3] = &equ;
    group[4] = &quadril; group[5] = &Rec; group[6] = &qua; group[7] = &Par; group[8] = &Rho;

    for (int i{}; i < 9; ++i)
    {
        group[i]->print_info();
    }

    return EXIT_SUCCESS;
}

