#include <iostream>

int main()
{
    int day, month, year;
    std::cin >> day >> month >> year;
    year -= 543;
    int dayinmonth = 31;
    if( month == 4  ||  month == 6  ||  month == 9  ||  month == 11   )
    {
        dayinmonth = 30;
    }
    else if ( month == 2 )
    {
        dayinmonth = 28;
        if ( year % 400 == 0)
        {
            dayinmonth = 29;
        }
        if (year % 4 == 0 && year % 100 != 0)
        {
            dayinmonth = 29;
        }
    }
    day += 15;
    if ( day > dayinmonth)
    {
        day -= dayinmonth;
        month += 1;
    }
    if ( month > 12)
    {
        month -= 12;
        year += 1;
    }
    year += 543;
    std::cout << day << '/' << month << '/' << year << std::endl;
    
}




