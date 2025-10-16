#include <iostream>
#include "print_q.h"

void print_q(const int* arr, int size)
{
    for (int j{ 0 }; j < size; ++j)
    {
        if (j == 0) { std::cout << "A="; }
        else if (j == 1) { std::cout << "B="; }
        else if (j == 2) { std::cout << "C="; }
        else if (j == 3) { std::cout << "D="; }

        std::cout << arr[j] << " ";
    }
    std::cout << std::endl;
}