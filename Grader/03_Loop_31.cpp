#include <iostream>
#include <cmath>

long long pow10(int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= 10;
    }
    return result;
}

int main()
{
    long long first = 0 , last = 0, result = 0 ;
    int digitoffirst = 0, digitoflast = 0;
    std::cin >> first >> last;
    if (first == 0)
    {
        digitoffirst += 1;
    }else digitoffirst = (int)(log10l(first)) + 1 ;
    
    
    digitoflast = (int)(log10l(last))+1;
    switch (digitoflast- digitoffirst)
    {
    case 0:
        result = (last - first+ 1)*digitoflast;
        break;
    case 1:
    
        result = digitoffirst*(pow10(digitoffirst)-first) + digitoflast*(last - pow10(digitoflast - 1  ) + 1);
        break;
    default:
        long long gap = 0;
    for ( int  i = digitoffirst + 1; i < digitoflast ; i++)
        {
            gap += i*(pow10(i)- pow10(i-1));
        }
        result = digitoffirst*(pow10(digitoffirst)-first) + digitoflast*(last - pow10(digitoflast - 1  ) + 1) + gap;
        break;
    }   
    std::cout << result;
}
/*
 string n, m; 
16 17
0123456789 101112131415
0123456789 1011121314151617
= f(m) - f(n - 1)


eg. 1234
f(1234) = 
 1 (for'0') + 9 * 1 (for 1to 9 ) + 90* 2 for (10 to 99) + 




/*    91  -- 110
    = 91 -- 99 => 2*(10^2  -91 )
    +
     100 -- 110 => 3*(110 - 10^2 + 1  )
    
91  -- 1100
    = 91 -- 99 => 2*(10^2  -91 )
    +
    100 -- 999 => 3*(10^3- 10^ 2)
    +
    1000 -- 1100 => 4*(1100 - 10^(4-1) + 1  )












 */ 