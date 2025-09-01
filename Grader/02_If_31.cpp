#include <iostream>
#include <cmath>

int main (void)
{
    int day_birth, month_birth, year_birth, day_now, month_now, year_now;
    std::cin >> day_birth >> month_birth >> year_birth >>  day_now >> month_now >> year_now;
    int dayinyeargap = 365*(year_now - year_birth - 1);
    int dayinbirthyear = 0;
    int dayinnowyear = 0;
    int dayinfeb_now = 0;
    int dayinfeb_birth = 0;
    year_birth -= 543;
    year_now -= 543;
    if (year_birth % 400 == 0)
    {
        dayinfeb_birth = 29;
    }else if(year_birth %  100 == 0)
    {
        dayinfeb_birth = 28;
    }else if (year_birth % 4 == 0)
    {
        dayinfeb_birth = 29;
    }else dayinfeb_birth = 28;
    dayinbirthyear += 1; // Include  Birth DAY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!// 
    if (month_birth <=  12)
    dayinbirthyear += 31 ;
    if (month_birth <= 11)
    dayinbirthyear += 30;
    if (month_birth <= 10 )
    dayinbirthyear += 31 ;
    if (month_birth <= 9 )
    dayinbirthyear += 30 ;
    if (month_birth <= 8 )
    dayinbirthyear += 31;
    if (month_birth <= 7 )
    dayinbirthyear += 31;
    if (month_birth <= 6 )
    dayinbirthyear += 30;
    if (month_birth <= 5 )
    dayinbirthyear += 31;
    if (month_birth <= 4 )
    dayinbirthyear += 30;
    if (month_birth <= 3 )
    dayinbirthyear += 31;
    if (month_birth <= 2 )
    dayinbirthyear +=  dayinfeb_birth;
    if (month_birth <= 1)
    {
        dayinbirthyear += 31;
    }
    dayinbirthyear -= day_birth;
    if (year_now % 400 == 0)
    {
        dayinfeb_now = 29;
    }else if(year_now %  100 == 0)
    {
        dayinfeb_now = 28;
    }else if (year_now % 4 == 0)
    {
        dayinfeb_now = 29;
    }else dayinfeb_now = 28;

    if (month_now > 0)
    dayinnowyear -= 1; // BEFORE NOW DAY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!// 
    if (month_now > 1)
    dayinnowyear += 31;
    if (month_now > 2)
    dayinnowyear += dayinfeb_now;
    if (month_now > 3)
    dayinnowyear += 31;
    if (month_now > 4)
    dayinnowyear += 30;
    if (month_now > 5)
    dayinnowyear += 31;
    if (month_now > 6)
    dayinnowyear += 30;
    if (month_now > 7)
    dayinnowyear += 31;
    if (month_now > 8)
    dayinnowyear += 31;
    if (month_now > 9)
    dayinnowyear += 30;
    if (month_now > 10)
    dayinnowyear += 31;
    if (month_now > 11)
    dayinnowyear += 30;
    dayinnowyear += day_now;
    int dayall = dayinbirthyear + dayinnowyear + dayinyeargap;
  //  std::cout << dayall << " = " << dayinbirthyear << " + " << dayinyeargap <<" + " << dayinnowyear;
    double Two_Pi_T = 2 * M_PI*dayall;
    double phy = std::sin(Two_Pi_T / 23);
    double emo = std::sin(Two_Pi_T / 28);
    double interlect = std::sin (Two_Pi_T / 33);

    std::cout << dayall << " " << round(phy*100.0)/100.0 << " " << round(emo*100.0)/100.0 << " " << round(interlect*100.0)/100.0;



}