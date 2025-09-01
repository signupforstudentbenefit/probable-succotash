#include <iostream>

int main()
{
    int weight;
    std::cin >> weight;
    if (weight <= 100)
    {
        std::cout << "18" << std::endl;
        return 0;
    }else   if (weight > 100 &&weight <= 250)
    {
        std::cout << "22" << std::endl;
        return 0;
    }else   if (weight > 250 && weight <= 500)
    {
        std::cout << "28" << std::endl;
        return 0;
    }else   if (weight > 500 && weight <= 1000)
    {
        std::cout << "38" << std::endl;
        return 0;
    }else   if (weight > 1000 && weight <= 2000)
    {
        std::cout << "58" << std::endl;
        return 0;
    }else std::cout << "Reject" << std::endl;

}