#include "std_lib_facilities.h"

int main() {
    string previous = " ";
    int word_counter = 0;
    string current;
    while (cin>>current) {
        ++word_counter;
        if (previous==current)
            cout << "word number " << word_counter
                 << " repeated: " << current << '\n';
        previous = current;
    }
}
