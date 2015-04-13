#include "std_lib_facilities.h"

int main() {
    int val1 = 0;
    int val2 = 0;
    cout << "Enter a number.\n";
    cin >> val1;
    cout << "Enter another number.\n";
    cin >> val2;
    cout << "You entered " << val1 << " and " << val2 << ".\n";

    if (val1>val2) cout << val1 << " is greater than " << val2 << ".\n"
                        << "Their difference is " << val1 - val2 << ".\n";
    else if (val2>val1) cout << val2 << " is greater than " << val1 << ".\n"
                             << "Their difference is " << val2 - val1 << ".\n";
    else cout << "Both values are equal. As such their difference is 0.\n";

    cout << "Their sum is " << val1 + val2 << ".\n"
         << "Their product is " << val1 * val2 << ".\n";

    double dval1 = val1;
    double dval2 = val2;
    double val1val2ratio = dval1 / dval2;
    cout << "The ratio of " << val1 << " to " << val2 << " is " << val1val2ratio << ".\n";
}
