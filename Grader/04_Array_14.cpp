#include <iostream>
#include <cmath>

int main()
{
    // input list of numbers
    int Row = 0 , Collumn = 0;
    std::cin >> Row >> Collumn;
    float numberinput[Row][Collumn] , movingavg[Row - 2][Collumn - 2];
    float sum9tiles , avg9tiles; 
    
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Collumn; j++)
        {
            std::cin >> numberinput[i][j];
        }
    }
    
    for( int i = 1 ; i < Row - 1; i++)
    {
        for(int j = 1 ; j < Collumn - 1 ; j++)
        {
            sum9tiles = numberinput[i  - 1][j - 1 ] + numberinput[i - 1 ][j] + numberinput[i - 1 ][j + 1 ] + numberinput[i ][j - 1 ] + numberinput[i ][j] + numberinput[i ][j + 1] + numberinput[i + 1 ][j - 1] + numberinput[i + 1 ][j ] + numberinput[i + 1 ][j + 1 ];
            avg9tiles = sum9tiles / 9;
            movingavg[i - 1][j - 1] = round(avg9tiles*100)/100.0;
        }

    }
    for (int i = 0; i < Row - 2; i++)
    {
        for (int j = 0; j < Collumn - 2; j++)
        {
            std::cout << movingavg[i][j];
            if(j == Collumn - 3)
            {
                std::cout << std::endl;
            }
            else std::cout << " ";
        }
    }
        
}
    

