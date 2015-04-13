#include "std_lib_facilities.h"

int main() {
    cout << "Enter 3 strings:\n";
    string string1;
    string string2;
    string string3;
    cin >> string1 >> string2 >> string3;
    cout << "You entered: " << string1 << ", " << string2 << " and " << string3 << ".\n";

    if (string1==string2 and string1==string3)
        cout << "All three strings begin with the same character!\n";

    else if (string1>=string2 and string1>=string3)
        if (string2>string3) cout << string3 << ", " << string2 << ", " << string1 << ".\n";
        else cout << string2 << ", " << string3 << ", " << string1 << ".\n";

    else if (string2>=string1 and string2>=string3)
        if (string1>string3) cout << string3 << ", " << string1 << ", " << string2 << ".\n";
        else cout << string1 << ", " << string3 << ", " << string2 << ".\n";

    else if (string3>=string2 and string3>=string1)
        if (string1>string2) cout << string2 << ", " << string1 << ", " << string3 << ".\n";
        else cout << string1 << ", " << string2 << ", " << string3 << ".\n";
}
