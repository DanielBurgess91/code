#include "std_lib_facilities.h"

int main() {
    cout << "Enter a number of miles to convert to kilometers:\n";
    double miles = 0;
    cin >> miles;
    double kilometers = 1.609 * miles;
    cout << miles << " miles is equal to " << kilometers << " kilometers.\n";
}
