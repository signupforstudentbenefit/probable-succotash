#include <iostream>
#include <cmath>

int main()
{
    int counter = 0;
    float a = 0, sum = 0;
    
    while (true)
    {
        std::cin >> a;

        if (a == -1)
        {
            break;
        }
        sum += a;
        counter++;

        
    }
    if (counter == 0)
    {
        std::cout << "No Data";
        return 0;
    }
    
    /*
    do
    {
        std::cin >> a;
        sum += a;
        counter++;
    } while (a != -1);
    */
    std::cout << round(sum /  counter *100)/100 << std::endl;
}