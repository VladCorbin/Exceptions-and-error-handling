#pragma once
#include "Quadrilateral.h"
#include "FigureError.h"

class Rhomb : public Quadrilateral // Ромб
{
public: Rhomb(const std::string& n, int a, int b, int c, int d, int A, int B, int C, int D);
};