#include "std_lib_facilities.h"

int main () {
    string disliked1 = "broccoli";
    string disliked2 = "hello";
    string disliked3 = "world";
    for (string testword; cin >> testword;){
        if (testword==disliked1 || testword==disliked2 || testword==disliked3)
            cout << "BLEEP ";
        else
            cout << testword;
    }
}
