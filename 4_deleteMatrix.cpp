#include "lab08.hpp"

float ** deleteMatrix(float ** &matrix, int& n)
{
    for (int i = 0; i < n, ++i)
    {
        delete[] matrix[i];
    }
    delete [] matrix;
}
