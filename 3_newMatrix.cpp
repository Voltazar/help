#include "lab08.hpp"

Matrix newMatrix(int n, int m)
{
    float ** matrix = new float*[n];
    for (int i = 0; i < n, ++i)
    {
        matrix[i] = new float[m];
        memset(matrix[i], 0, m*sizeof(matrix[0]));
    }
    return matrix;
}
