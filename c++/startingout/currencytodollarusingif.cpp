#include "std_lib_facilities.h"

int main() {
    constexpr double yentodollars = 0.0084;
    constexpr double eurotodollars = 1.07;
    constexpr double poundtodollars = 1.49;
    double amount = 1;
    char currency = ' ';
    cout << "Enter the amount and currency (yen=y, euro=e, pound=p) you wish to convert to dollars: ";
    cin >> amount >> currency;
    if ( currency=='y' )
        cout << amount << " yen is " << amount * yentodollars << " dollars.\n";
    else if ( currency=='e' )
        cout << amount << " euros is " << amount * eurotodollars << " dollars.\n";
    else if ( currency=='p' )
        cout << amount << " pounds is " << amount * poundtodollars << " dollars.\n";
    else
        cout << "I don't know what currency you're trying to specify.\n";
}
