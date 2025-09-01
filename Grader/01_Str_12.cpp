#include <iostream>
#include <string>
int main ()
{
    std::string text , day , year;
    std::string month[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV" , "DEC"};
    std::cin >> text ;
    day = text.substr(0,2);
    int  monthnum = stoi(text.substr(3,2));
    year = text.substr(6,4);
    int yearnum = stoi(year) - 543;
    std::cout << month[monthnum-1] << " " << day << ", " << yearnum << std::endl;
}