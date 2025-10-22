#pragma once
#include "Figure.h"
#include "print_q.h"
#include "FigureError.h"

class Quadrilateral : public Figure // ������� ��������������
{
protected:
    int sides[4]; // �������
    int angles[4]; // ����
public:
    Quadrilateral();
    Quadrilateral(const std::string& n, int a, int b, int c, int d, int A, int B, int C, int D);

    void print_info() override;
};