#include <iostream>
#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(const std::string& n, int a, int b, int c, int d, int A, int B, int C, int D) : Figure("��������������", 4)
{
    sides[0] = a; sides[1] = b; sides[2] = c; sides[3] = d;
    angles[0] = A; angles[1] = B; angles[2] = C; angles[3] = D;

    if ((A + B + C + D) != 180) throw Figure_err("���� � ����� �� ���� 360!");
}

void Quadrilateral::print_info()
{
    int size{ 4 }; // ���������� �����
    std::cout << name << ":\n";
    std::cout << "�������: "; print_q(sides, size);
    std::cout << "����: "; print_q(angles, size);
}

void print_q(const int* arr, int size);