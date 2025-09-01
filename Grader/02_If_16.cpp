#include <iostream>
#include <string>
int main()
{
    int number = 0;
    std::string sign = "zero";
    std::string parity = "even" ;
    std::cin >> number;
    if (number != 0)
    {
        if (number > 0)
        sign = "positive";
        else sign = "negative";
        if ((number % 2+2 ) % 2 == 1 )
        parity = "odd";
    }
    std::cout << sign<<std::endl << parity << std::endl;
}