#include "add.h"
#include <iostream>

int getUserInput();

int main()
{
    int val1 {getUserInput()};
    int val2 {getUserInput()};

    std::cout << val1 << " + " << val2 << " = " << val1+val2 << '\n';
    return 0;

}

int getUserInput()
{
    int x{};

    std::cout << "Please enter a number: ";
    std::cin >> x;
    return x;
}