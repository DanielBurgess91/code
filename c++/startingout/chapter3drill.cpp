#include "std_lib_facilities.h"

int main() {
    string first_name = " ";
    cout << "Enter the name of the person you wish to write to.\n";
    cin >> first_name;

    string friend_name = " ";
    cout << "What's that knobs name?\n";
    cin >> friend_name;

    char friend_sex = '0';
    cout << "Is it a bird or a geezer (m for a geezer, f for a bird)?\n";
    cin >> friend_sex;

    int age;
    cout << "How old is " << first_name << "?\n";
    cin >> age;

    cout << "Dear " << first_name << ",\n"
         << "    Whaddup boosh? Gainz gainz gainz gainz."
         << " Bicep charles. Swole Jesus."
         << " How is " << friend_name << " doing faggotbreath?";

         if (friend_sex=='m') cout << " " << friend_name << " is a geezer, ye? ";
         else if (friend_sex=='f') cout << " " << friend_name << " is a bird, ye? ";
         else cout << "\nYou Fucked Up Son.\n";

         if (age<=0 or age>=110) simple_error("You're kidding.");
         else
            if (age<=12) cout << "Next year you will be " << age+1 << ".\n";
            else if (age==17) cout << "Next year you will be able to vote.\n";
            else if (age>=70) cout << "I hope you are enjoying retirement.\n";
            else cout << "I hear you just had a birthday and you are " << age
                      << " years old.\n";

         cout << "Yours sincerely,\n\nDan.\n";
}
