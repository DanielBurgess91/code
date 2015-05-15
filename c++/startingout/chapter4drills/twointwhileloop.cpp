#include "../std_lib_facilities.h"

int main() {
    int number1 = 0;
    int number2 = 0;
    cout << "Enter a digit to print, or | to exit: \n";
    while (cin>>number1>>number2) { 
        if (number1==number2)
            cout << "The numbers are equal.\n";
        else if (number1>number2)
            cout << number1 << " is greater than " << number2 << ".\n";
        else if (number2>number1)
            cout << number2 << " is greater than " << number1 << ".\n";
        cout << "Enter a digit to print, or | to exit: \n";
    }
}
