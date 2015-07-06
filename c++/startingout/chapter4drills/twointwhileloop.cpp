#include<iostream>
#include<cmath>

int main()
{
    double number1 = 0;
    double number2 = 0;
    std::cout << "Enter two digits to print, or | to exit: \n";
    while (std::cin>>number1>>number2)
    {

        std::cout << "The absolute difference between the two numbers is: " << fabs(number1-number2) << '\n';

        if (number1==number2) 
            std::cout << "The numbers are equal.\n";
        else if (number1>number2)
            std::cout << number1 << " is greater than " << number2 << ".\n";
        else if (number2>number1)
            std::cout << number2 << " is greater than " << number1 << ".\n";

        if (fabs(number1-number2)<=.01)
            std::cout << "The numbers are almost equal.\n";

        std::cout << "Enter two digits to print, or | to exit: \n";
    }
}
