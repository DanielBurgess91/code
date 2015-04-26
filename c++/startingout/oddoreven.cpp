#include "std_lib_facilities.h"

int main() {
    int val1 = 1;
    cout << "Enter a number:\n";
    cin >> val1;
    if (val1 % 2==0)
        cout << val1 << " is even.\n";
    else
        cout << val1 << " is odd.\n";
}
