#include <iostream>
#include <cmath>
int main()
{
    double  a = 0, b = 0 ,c = 0 , d = 0;
    std::cin >> a >> b >> c >> d;
    double min = a;
    double max = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    if (d < min)
    {
        min = d;
    }
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }
    
    

    double sum  = a + b + c + d;
    double avg = (sum -(min + max))/(2);
    std::cout << round(avg*100.0)/100.0 << std::endl;
}