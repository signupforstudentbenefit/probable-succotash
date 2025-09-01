#include <iostream>

int main()
{
    int h;
    std::cin >> h;
    for (int i = 0; i < h; i++)
    {
        if(i != h - 1)
        {
            for(int j = i; j < h - 1 ; j++)
            {
                std::cout << "."; 
            } 
            std::cout << "*";
            if (i == 0)
            {
            std::cout << std::endl;
            }
            else 
            {
            for (int k = 0; k < 2*i - 1 ; k++)
            {
               std::cout << "."; 
            }
            std::cout << "*" << std::endl;
            }
        }
        else for (int l = 0; l < 2*h - 1; l++)
           {
               std::cout << "*";
           }
    }
}