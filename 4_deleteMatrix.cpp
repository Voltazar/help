#include "lab08.hpp"

void deleteMatrix(Matrix&)
{
    float ** matrix = m.matrix;
    for (int i = 0; i < n, ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    m.matrix= nullptr;
    m.n = 0;
    m.m = 0;
}
