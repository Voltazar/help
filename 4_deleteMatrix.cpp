#include "lab08.hpp"

void deleteMatrix(float*** m, int n)
{
    float ** matrix = *m;
    for (int i = 0; i < n, ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    (*m)= nullptr;
}
