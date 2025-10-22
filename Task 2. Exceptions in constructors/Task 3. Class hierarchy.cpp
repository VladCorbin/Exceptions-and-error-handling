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
#include "FigureError.h"


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    

    try
    {
        Triangle tri; // базовый триугольник
        right_angled_triangle rig { "Прямоугольный треугольник", 10, 20, 30, 50, 60, 90 }; // Прямоугольный треугольник
        Isosceles_triangle Iso { "Равнобедренный треугольник", 10, 20, 10, 50, 60, 50 };// Равнобедренный треугольник
        equilateral_triangle equ { "Равносторонний треугольник", 30, 30, 30, 60, 60, 60 }; // Равносторонний треугольник

        Quadrilateral quadril; // базовый четырёхугольник
        Rectangl Rec{ "Прямоугольник", 10, 20, 10, 20, 90, 90, 90, 90 }; // Прямоугольник
        quadrate qua { "Квадрат", 20, 20, 20, 20, 90, 90, 90, 90 }; // Квадрат
        Parallelogram Par{ "Параллелограмм", 20, 30, 20, 30, 30, 40, 30, 40 }; // Параллелограмм
        Rhomb Rho{ "Ромб", 20, 30, 20, 30, 30, 40, 30, 40 }; // Ромб

        Rho.print_info();
        //Figure* group[9];
        //group[0] = &tri; group[1] = &rig; group[2] = &Iso; group[3] = &equ;
        //group[4] = &quadril; group[5] = &Rec; group[6] = &qua; group[7] = &Par; group[8] = &Rho;

        //for (int i{}; i < 9; ++i)
        //{
        //    group[i]->print_info();
        //}
    }
    catch (std::exception& err) {
        std::cout << "Error: " << err.what() << std::endl;
    }
    std::cout << "OK";

    return EXIT_SUCCESS;
}

