#include <iostream>
#include "problem5.h"



#define N 4

void transposing(int A[][N], int B[][N])
{
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            B[i][j] = A[j][i];
}

void transpose()
{
    std::cout << "<<<< PROBLEM 5 >>>>" << "\nTranspose Matrix\n" << std::endl;
    int A[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};

    std::cout << "Original Matrix: " << std::endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            std::cout << A[i][j] << " ";
        }
        std::cout << "\n";
    }
    int B[N][N];

    transposing(A, B);

    std::cout << "Transposed Matrix: " << std::endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
           std::cout << B[i][j] << " ";
           std::cout << "\n";
    }
}

void flattening(int A[][N], int B[])
{
    for (int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            B[i] = A[i][j];
        }
    }
}

void flatten() {
    std::cout << "\nTranspose Matrix\n" << std::endl;
    int A[N][N] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};

    std::cout << "Original Matrix: " << std::endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            std::cout << A[i][j] << " ";
        }
        std::cout << "\n";
    }
    int B[N+N];

    flattening(A, B);

    std::cout << "Flattened Matrix: " << std::endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
           std::cout << B[i] << " ";
    }
}
