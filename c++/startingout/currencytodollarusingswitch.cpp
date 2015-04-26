#include "std_lib_facilities.h"

int main() {
    constexpr double yentodollars = 0.0084;
    constexpr double eurotodollars = 1.07;
    constexpr double poundtodollars = 1.49;
    constexpr double yuantodollars = 0.16;
    constexpr double kronertodollars = 0.14;

    double amount = 1;
    char currency = ' ';

    cout << "Enter the amount and currency (yen=y, euro=e, pound=p, yuan=u, kroner=k) you wish to convert to dollars: ";
    cin >> amount >> currency;

    switch (currency) {
        case 'y':
            cout << amount << " yen is " << amount * yentodollars << " dollars.\n";
            break;
        case 'e':
            cout << amount << " euros is " << amount * eurotodollars << " dollars.\n";
            break;
        case 'p':
            cout << amount << " pounds is " << amount * poundtodollars << " dollars.\n";
            break;
        case 'u':
            cout << amount << " yuan is " << amount * yuantodollars << " dollars.\n";
            break;
        case 'k':
            cout << amount << " kroners is " << amount * kronertodollars << " dollars.\n";
            break;
        default:
            cout << "I don't know what currency you're trying to specify.\n";
            break;
    }
}
