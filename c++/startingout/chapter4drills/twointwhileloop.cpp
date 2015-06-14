#include "../std_lib_facilities.h"

int main()
{
    double number1 = 0;
    double number2 = 0;
    cout << "Enter a digit to print, or | to exit: \n";
    while (cin>>number1>>number2)
    { 
        double numberdifference;
        double absnumberdifference;
        numberdifference = number1 - number2;
        absnumberdifference = fabs(numberdifference);

        cout << "The absnumberdifference variable is equal to: " << absnumberdifference << '\n';

        if (number1==number2) 
            cout << "The numbers are equal.\n";
        else if (number1>number2)
            cout << number1 << " is greater than " << number2 << ".\n";
        else if (number2>number1)
            cout << number2 << " is greater than " << number1 << ".\n";

        if (0.01==absnumberdifference || 0.01>absnumberdifference)
            cout << "The numbers are almost equal.\n";

        cout << "Enter a digit to print, or | to exit: \n";
    }
}
