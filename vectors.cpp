/*
  * 1.3
  * Request the entries of two length 3 vectors and return the dot product and Euclidean norms.
*/

#include <iostream>
#include <cmath>

double scalar_product(double a[3], double b[3])
{
    int n;
    n = 3;

    double sp;
    sp = 0;

    for (int i=0; i<n; i++)
    {
        sp += a[i] * b[i];
    }
    return sp;

}

double euclidean_norm(double a[3])
{
    int n;
    n = 3;

    double en;
    en = 0;
    for (int i=0; i<n; i++)
    {
        en += a[i] * a[i];
    }
    en = sqrt(en);
    return en;
}

int main(int argc, char* argv[])
{
    double a[3];
    double b[3];

    std::cout << "**************************************************************************************************** \n";

    std::cout << "This program will print the dot product and Euclidean norms of two length 3 vectors... \n";
    std::cout << "Please provide the values of vectors a and b one by one... \n";

    std::cout << " a_1:";
    std::cin >> a[0];
    std::cout << "a_2:";
    std::cin >> a[1];
    std::cout << " a_3:";
    std::cin >> a[2];
    std::cout << "b_1:";
    std::cin >> b[0];
    std::cout << " b_2:";
    std::cin >> b[1];
    std::cout << "b_3:";
    std::cin >> b[2];

    double sp;
    sp = scalar_product(a, b);

    std::cout << "Scalar product: " << sp << "\n";

    double a_norm, b_norm;

    a_norm = euclidean_norm(a);
    b_norm = euclidean_norm(b);

    std::cout << "||a||_2: " << a_norm << "\n";
    std::cout << "||b||_2: " << b_norm << "\n";

    std::cout << "**************************************************************************************************** \n";
}
