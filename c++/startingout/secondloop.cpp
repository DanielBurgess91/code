#include "std_lib_facilities.h"

int main() {
    for (int i = 97; i<=122; ++i)
        cout << char(i) << ' ';

    cout << '\n';

    for (int i = int('A'); i<=int('Z'); ++i)
        cout << i << ' ';

    cout << '\n';

    for (int i = int('0'); i<=int('9'); ++i)
        cout << i << ' ';

    cout << '\n';
}
