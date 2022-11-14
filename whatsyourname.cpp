/*
  * 1.5
  * Request user's first name and second name and return their name.
*/

#include <iostream>
#include <string>

int main()
{
    std::string first;
    std::string last;
    std::cout << "I would like to know your name...\n";
    std::cout << "Forename: \n";
    std::cin >> first;
    std::cout << "Surname: \n";
    std::cin >> last;
    std::cout << "Hi " << first << " " << last << "\n";
}
