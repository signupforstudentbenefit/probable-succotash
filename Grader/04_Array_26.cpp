#include <iostream>

int main()
{
    int count,input,inversion = 0 ,addressof_0 = 0;
    std::cin >> count;
    int size = count*count;
    int Numbers[size];
    for (size_t i = 0; i < size ; i++)
    {
        std::cin >> input;
        if (input == 0 )
        {
        addressof_0 = i;
        }
        Numbers[i] = input;
        
    }
    // std::cout << addressof_0;
    int sizes = size -1;
    int NewNumbers[sizes];
    for (size_t i = 0; i < size; i++)
    {
        if (i < addressof_0)
        {
            NewNumbers[i] = Numbers[i];
        }else NewNumbers[i] = Numbers[i+1];
        
    }
    for (size_t i = 0; i < sizes; i++)
    {
        for (size_t j = i + 1; j < sizes; j++)
        {
            if (NewNumbers[i] > NewNumbers[j])
            {
                inversion++;
            }
            
        }
        
    }
    int rowof_0 = addressof_0 / count;
    if (count % 2 == 1)
    {
        if (inversion % 2 == 0)
        {
            std::cout << "YES";
            return 0;
        }std::cout << "NO";
    return 0;
        
    }else if (inversion % 2 == 1)
    {
        if (rowof_0 % 2 == 0)
        {
            std::cout << "YES";
            return 0;
        }std::cout << "NO";
    return 0;
        
    }else if (inversion % 2 == 0)
    {
        if (rowof_0 % 2 == 1)
        {
            std::cout << "YES";
            return 0;
        }std::cout << "NO";
    return 0;
    }
    std::cout << "NO";
    return 0;
    
    

    
    
    
    
}