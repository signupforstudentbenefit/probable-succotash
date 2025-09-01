#include <iostream>

int main()
{
    int N, divisor = 2;
    std::cin >> N;
    while (N != divisor)
    {
        while (N % divisor == 0 )
        {
            N /= divisor;
            std::cout << divisor ;
            if (N != 1)
            {
                std::cout << "*";
            }else return 0;
            
        }
        divisor++;
    }
    std::cout << divisor;
}