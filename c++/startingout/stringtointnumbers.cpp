#include "std_lib_facilities.h"

int main() {
    string numbername = " ";
    cout << "Enter a number in string form:\n";
    cin >> numbername;
    if (numbername=="zero")
        cout << numbername << " in digit form is: 0.\n";
    else if (numbername=="one")
        cout << numbername << " in digit form is: 1.\n";
    else if (numbername=="two")
        cout << numbername << " in digit form is: 2.\n";
    else if (numbername=="three")
        cout << numbername << " in digit form is: 3.\n";
    else if (numbername=="four")
        cout << numbername << " in digit form is: 4.\n";
    else
        cout << "Sorry not a number I know.\n";
}
