#include <iostream>

int main ()
{
    int day, month, year, dayinfeb;
    std::cin >> day >> month >> year;
    year -= 543;
    // std::cout << day <<  std::endl << month <<std::endl << year << std::endl;
    
    // chech dayinfeb
    if (year % 400 == 0)
    {
        dayinfeb = 29;
    }else if(year %  100 == 0)
    {
        dayinfeb = 28;
    }else if (year % 4 == 0)
    {
        dayinfeb = 29;
    }else dayinfeb = 28;

    if (month > 0)
    day += 0;
    if (month > 1)
    day += 31;
    if (month > 2)
    day += dayinfeb;
    if (month > 3)
    day += 31;
    if (month > 4)
    day += 30;
    if (month > 5)
    day += 31;
    if (month > 6)
    day += 30;
    if (month > 7)
    day += 31;
    if (month > 8)
    day += 31;
    if (month > 9)
    day += 30;
    if (month > 10)
    day += 31;
    if (month > 11)
    day += 30;
    std::cout << day << std::endl;
}