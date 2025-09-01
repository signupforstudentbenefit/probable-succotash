#include <iostream>

int main()
{
    float p;
    std::cin >> p ;
    float k = 1, t = 1;
    while (true)
    {
        t = (t*(365.0-k+1.0)) / 365.0;
        if (1-t >= p)
        {
            break;
        }
        k++;
        
    }
    std::cout << k;
    
}