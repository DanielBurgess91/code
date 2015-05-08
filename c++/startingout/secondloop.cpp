#include "std_lib_facilities.h"

int main() {
    // print the binary values of a through z.
    for (int i = 97; i<=122; ++i)
        cout << char(i) << '\t' << i << '\n';

    cout << '\n';

    // print the binary values of A through Z.
    for (int i = int('A'); i<=int('Z'); ++i)
        cout << char(i) << '\t' << i << '\n';

    cout << '\n';

    // print the binary values of (the characters) 0 through 9.
    for (int i = int('0'); i<=int('9'); ++i)
        cout << char(i) << '\t' << i << '\n';

    cout << '\n';
}
