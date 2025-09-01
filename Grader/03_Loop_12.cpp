#include <iostream>
#include <cmath>

int main()
{
    double a = 0;
    std::cin >> a;
    double L = 0, U = a;
    double  x = ( L + U ) / 2;
    double b;
    do
    {        b = std::pow(10,x);
        if ( b  > a )
        {
            U = x;
        }
        if (b < a)
        {
            L = x;
        }

        x = ( L + U ) / 2;
    } while ((std::abs(a-b)  > 7*std::pow(10,-11)*std::max(a,b)));
    std::cout << x + x*(a == 1) << std::endl;
}