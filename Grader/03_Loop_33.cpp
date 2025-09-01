#include <iostream>
#include <algorithm>

int main()
{
    int  x_0 = 0 , x_1 = 0  , rowcounter = 0 , max_odd ,  min_odd , max_even , min_even;
;


    // row 0;
    while (std::cin >> x_0)
    {
        
        
        if ((x_0 + 999)*(x_0+998) == 0)
        {
           break;
        }
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
    if (x_0 == -998)
    {
        std::cout << min_even << " " << max_odd;
    }else 
    std::cout << min_odd << " " << max_even;
    
    
    
}
/*
     0   1
   +-------
0  | 0   1
1  | 1   2
2  | 2   3
3  | 3   4
4  | 4   5
5  | 5   6
5  | 6   7
6  | 7   8



*/