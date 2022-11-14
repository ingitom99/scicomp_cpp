/*
Find the sum and multiplication of two 2x2 matrices.
*/

#include <iostream>

int main()
{
    double A[2][2];
    double B[2][2];

    std::cout << "\n***************************************************************************************\n";

    std::cout << "This program will compute the sum and product of a pair of 2x2 matrices... \n";
    std::cout << "Please fill in the matrix elements... \n";

    std::cout << "A11: \n";
    std::cin >> A[0][0];
    std::cout << "A12: \n";
    std::cin >> A[0][1];
    std::cout << "A21: \n";
    std::cin >> A[1][0];
    std::cout << "A22: \n";
    std::cin >> A[1][1];
    std::cout << "B11: \n";
    std::cin >> B[0][0];
    std::cout << "B12: \n";
    std::cin >> B[0][1];
    std::cout << "B21: \n";
    std::cin >> B[1][0];
    std::cout << "B22: \n";
    std::cin >> B[1][1];


    // double A[2][2] = {{1.123, 1.345}, {3.2323, 3.3413}};
    // double B[2][2] = {{1.153, 9.345}, {5.2323, 9.2313}};

    double C[2][2];
    double D[2][2];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    D[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    D[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    D[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    D[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];

    std::cout << "\n A + B = \n";
    std::cout << "\n(" << C[0][0] << "  " << C[0][1] << ")" << "\n";
    std::cout << "(" << C[1][0] << "  " << C[1][1] << ")"  << "\n";

    std::cout << "\n A * B = \n";
    std::cout << "\n(" << D[0][0] << "  " << D[0][1] << ")"  << "\n";
    std::cout << "(" << D[1][0] << "  " << D[1][1] << ")"  << "\n";

    std::cout << "\n***************************************************************************************\n";
}
