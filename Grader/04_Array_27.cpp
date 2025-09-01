#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string exzero;
    int garbval = 0, x_0 = 0 , x_1 = 0  , rowcounter = 0 , max_odd ,  min_odd , max_even , min_even;


    std::cin >> garbval;
    // row 0;
    while (std::cin >> exzero)
    {
        
        
        if (exzero[0] == 'Z')
        {
            break;
        }
        x_0 = stoi(exzero);
        std::cin >> x_1;

        if (rowcounter == 0)
        {
            max_odd =  x_1 ;
            min_odd =  x_1 ;
            max_even = x_0 ;
            min_even = x_0 ;
        }
        
        if (rowcounter % 2 == 1)
        {
            std::swap(x_0,x_1);
        }
        if (x_0 > max_even)
        {
            max_even = x_0;

        }
        if (x_0 < min_even)
        {
            min_even = x_0;
        }


        if (x_1 > max_odd)
        {
            max_odd = x_1;
        }
        if (x_1 < min_odd)
        {
        min_odd = x_1;
        }
        rowcounter++;
        
        
        
        
    }
    if (exzero[1] == 'i' )
    {
        std::cout << min_even << " " << max_odd;
    }else 
    std::cout << min_odd << " " << max_even;
    
    
    
}