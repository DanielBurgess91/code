#include "std_lib_facilities.h"

int main() {
    string operation = " ";
    double operand1 = 0;
    double operand2 = 0;
    cout << "Enter an operation and two operands:\n";
    cin >> operation >> operand1 >> operand2;
    if (operation=="+" or operation=="plus")
        cout << operand1 << " plus " << operand2 << " is equal to " << operand1 + operand2 << ".\n";
    else if (operation=="-" or operation=="minus")
        cout << operand1 << " minus " << operand2 << " is equal to " << operand1 - operand2 << ".\n";
    else if (operation=="*" or operation=="mul")
        cout << operand1 << " multiplied by " << operand2 << " is equal to " << operand1 * operand2 << ".\n";
    else if (operation=="/" or operation=="div")
        cout << operand1 << " divided by " << operand2 << " is equal to " << operand1 / operand2 << ".\n";
    else
        cout << "I don't understand that operation.\n";
}
