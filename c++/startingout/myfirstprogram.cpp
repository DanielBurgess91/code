#include <iostream>
#include <string>

int main() {
    int x;
    int y;
    std::cout << "Enter two numbers: ";
    if (std::cin >> x >> y)
        std::cout << "You did it right.\n";
    else {
        std::cout << "One of the inputs wasn't a number.\n";
        return 1;
    }
    if (x > y)
        std::cout << "The first number you entered is bigger than the second.\n";
    else if (x == y)
        std::cout << "The numbers you entered are equal.\n";
    else
        std::cout << "The first number you entered is smaller than the second.\n";

    return 0;
}
