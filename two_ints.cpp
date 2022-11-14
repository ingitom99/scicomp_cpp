/*
A program to request two integers from the user and print their product.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Gimme two integers: x, y \n";

    int x;
    int y;

    std::cin >> x >> y;

    std::cout << "x * y = " << x*y << "\n";

}