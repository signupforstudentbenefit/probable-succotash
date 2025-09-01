#include <iostream>
#include <cmath>

int main()
{
    double subscriber ;
    std::cin>> subscriber;
    if (subscriber < 1000)
    {
        std::cout << subscriber << std::endl;
        return 0;   
    }
    subscriber /= 1e3;
    if (subscriber < 10)
    {
        std::cout << round(subscriber*10)/10 << "K" << std::endl;
        return 0;   
    }
    if (subscriber < 1000)
    {
        std::cout << round(subscriber) << "K" << std::endl;
        return 0;   
    }
    subscriber /= 1e3;
    if (subscriber < 10)
    {
        std::cout << round(subscriber*10)/10 << "M" << std::endl;
        return 0;   
    }
    if (subscriber < 1000)
    {
        std::cout << round(subscriber) << "M" << std::endl;
        return 0;   
    }
    subscriber /= 1e3;
    if (subscriber < 10)
    {
        std::cout << round(subscriber*10)/10 << "B" << std::endl;
        return 0;   
    }
        std::cout << round(subscriber) << "B" << std::endl;
        return 0;   
}