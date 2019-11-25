#include <iostream>

int main()
{
    int x{0};
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Double the entered number is: " << 2*x << "\n";
    return 0;
}