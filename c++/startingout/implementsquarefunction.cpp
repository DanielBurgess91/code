#include "std_lib_facilities.h"

int square(int z) {
    // z holds the value being squared so if we want to square 9, z is 9.
    // x holds the current value as we are adding z to itself z times.
    /* i increments until we have added z to itself z times. i starts at 0 so we need to stop at 1 less than
    z, we could also start i at 1 and end when it is equal to z. */
    int x = 0;
    for (int i = 0; i<z; ++i) {
        x += z;
    }
    return x;
}

int main() {
    for (int i = 0; i<100; ++i) {
        cout << i << '\t' << square(i) << '\n';
    }
}


