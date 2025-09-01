#include <iostream>

int main()
{
    int size = 0 ,peak = 0;
    std::cin >> size;
    float data[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> data[i];
    }
    for (int i = 1; i < size - 1; i++)
    {
        if(data[i] > data[i-1] && data[i] > data[i+1])
        {
            peak++;
        }
    }
    std::cout << peak << std::endl;
}