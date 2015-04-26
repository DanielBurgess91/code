#include "std_lib_facilities.h"

int main() {
    const int penny = 1;
    const int nickel = 5;
    const int dime = 10;
    const int quarter = 25;
    const int halfdollar = 50;
    const int onedollar = 100;
    int userpennies = 0;
    int usernickels = 0;
    int userdimes = 0;
    int userquarters = 0;
    int userhalfdollars = 0;
    int useronedollars = 0;
    cout << "How many pennies do you have? ";
    cin >> userpennies;
    cout << "How many nickels do you have? ";
    cin >> usernickels;
    cout << "How many dimes do you have? ";
    cin >> userdimes;
    cout << "How many quarters do you have? ";
    cin >> userquarters;
    cout << "How many half dollar coins do you have? ";
    cin >> userhalfdollars;
    cout << "How many one dollar coins do you have? ";
    cin >> useronedollars;
    if (userpennies==1)
        cout << "You have " << userpennies << " penny.\n";
    else
        cout << "You have " << userpennies << " pennies.\n";
    if (usernickels==1)
        cout << "You have " << usernickels << " nickel.\n";
    else
        cout << "You have " << usernickels << " nickels.\n";
    if (userdimes==1)
        cout << "You have " << userdimes << " dime.\n";
    else
        cout << "You have " << userdimes << " dimes.\n";
    if (userquarters==1)
        cout << "You have " << userquarters << " quarter.\n";
    else
        cout << "You have " << userquarters << " quarters.\n";
    if (userhalfdollars==1)
        cout << "You have " << userhalfdollars << " half dollar.\n";
    else
        cout << "You have " << userhalfdollars << " half dollars.\n";
    if (useronedollars==1)
        cout << "You have " << useronedollars << " one dollar coin.\n";
    else
        cout << "You have " << useronedollars << " one dollar coins.\n";
    int userpennycents = penny * userpennies;
    int usernickelcents = nickel * usernickels;
    int userdimecents = dime * userdimes;
    int userquartercents = quarter * userquarters;
    int userhalfdollarcents = halfdollar * userhalfdollars;
    int useronedollarcents = onedollar * useronedollars;
    int fullamount = userpennycents + usernickelcents + userdimecents + userquartercents + userhalfdollarcents + useronedollarcents;
    cout << "You have: " << fullamount << " cents.\n";
    double fullamountindollars = double(fullamount) / 100;
    cout << "You have: $" << fullamountindollars << " dollars.\n";
}
