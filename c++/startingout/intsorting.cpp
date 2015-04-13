#include "std_lib_facilities.h"

int main() {
    cout << "Enter 3 numbers:\n";
    int val1;
    int val2;
    int val3;
    cin >> val1 >> val2 >> val3;
    cout << "You entered: " << val1 << ", " << val2 << " and " << val3 << ".\n";

    if (val1==val2 and val1==val3)
        cout << "All three numbers are equal!\n";

    else if (val1>=val2 and val1>=val3)
        if (val2>val3) cout << val3 << ", " << val2 << ", " << val1 << ".\n";
        else cout << val2 << ", " << val3 << ", " << val1 << ".\n";

    else if (val2>=val1 and val2>=val3)
        if (val1>val3) cout << val3 << ", " << val1 << ", " << val2 << ".\n";
        else cout << val1 << ", " << val3 << ", " << val2 << ".\n";

    else if (val3>=val2 and val3>=val1)
        if (val1>val2) cout << val2 << ", " << val1 << ", " << val3 << ".\n";
        else cout << val1 << ", " << val2 << ", " << val3 << ".\n";
}
