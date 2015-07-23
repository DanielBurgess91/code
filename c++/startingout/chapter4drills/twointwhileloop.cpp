#include<iostream>
#include<cmath>
#include<vector>

int main()
{
    double largest = 0;
    double smallest = 0;
    double loopnumber = 0;
    std::string loopunit = "";
    std::vector<std::string> units = {"cm", "m", "in", "ft"};

    std::cout << "Enter a digit or | to exit: \n";
    while (std::cin>>loopnumber>>loopunit)
    {
        if (loopnumber<smallest)
        {
            smallest = loopnumber;
            std::cout << "You entered " << loopnumber << ", this is the smallest number you have entered so far!\n";
        }
        else if (loopnumber>largest)
        {
            largest = loopnumber;
            std::cout << "You entered " << loopnumber << ", this is the largest number you have entered so far!\n";
        }
        else
        {
            std::cout << "You entered " << loopnumber << ", this is neither the largest nor smallest number you have entered.\n";
        }

        std::cout << "Enter a digit or | to exit: \n";
    }
}
