#include <iostream>
#include <iomanip>

int main()
{
    int size;
    std::cin >> size;
    float input[size] ={0};
    double output[size]= {0};
    for (int i = 0; i < size; i++)
    {
        std::cin >> input[i];
        for (int j = i; j >= 0; j--)
        {
            output[i] += input[j];
            if (j != 0)
            {
                output[i] = 1.0 / output[i];
            }
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        std::cout << std::setprecision(10) << output[i] << std::endl;
    }
}