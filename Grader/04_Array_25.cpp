#include <iostream>

int main()
{
    int count;
    std::cin >> count;
    int Height[count];
    int max = 1,water = 0;
    bool found_c_onleft,found_c_onright;
    for (size_t i = 0; i < count; i++)
    {
        std::cin >> Height[i];
        if (Height[i] > max)
        {
            max = Height[i];
        }
        
    }
    char Area[count][max];
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < max; j++)
        {
            if (Height[i] > 0)
            {
                Area[i][j] = 'c';
                Height[i]--;
            }else Area[i][j] = 'a';
            // std::cout << Area[i][j];
            
        }
        // std::cout << std::endl;
        
    }
    for (size_t i = 1; i < count - 1; i++)
    {
        for (size_t j = 1; j < max ; j++)
        {
            found_c_onleft = false;
            found_c_onright = false;
            if (Area[i][j] == 'c')
            {
                // std::cout << Area[i][j];
                continue;
            }
            for (size_t k = 0; k < i ; k++)
            {
                if (Area[k][j] == 'c')
                {
                    found_c_onleft = true;
                }
                
            }
            for (size_t k = i + 1; k < count; k++)
            {
                if (Area[k][j] == 'c')
                {
                    found_c_onright = true;
                }
            }
            if (found_c_onleft && found_c_onright)
            {
                water++;
                Area[i][j] == 'w';
            }
            // std::cout << Area[i][j];
            
            
            
        }
        // std::cout << std::endl;
        
    }
    std::cout << water;
    

    
}

// ij
// 00 01 02 03
// 10 11 12 13
// 20 21 22 23
// 30 31 32 33
