#include <iostream>
#include <vector>

int main()
{
    std::vector<int> list;
    int count,adder;
    std::cin >> count;
    bool insertedback = false , insertedfront = false;
    for (size_t i = 0; i < count; i++)
    {
        std::cin >> adder;
        if (i == 0)
        {
            list.push_back(adder);
            insertedback = true;
        }else if (insertedback == true)
        {
            list.insert(list.begin(),adder);
            insertedfront = true;
            insertedback = false;
        }else if (insertedfront == true)
        {
            list.insert(list.end(),adder);
            insertedback = true;
            insertedfront = false;
        }
    }
    while (std::cin >> adder)
    {
        if (adder == -1)
        {
            break;
        }else if (insertedback == true)
        {
            list.insert(list.begin(),adder);
            insertedfront = true;
            insertedback = false;
        }else if (insertedfront == true)
        {
            list.insert(list.end(),adder);
            insertedback = true;
            insertedfront = false;
        }
        
        
    }
    count = list.size();
    std::cout << "[";
    for (size_t i = 0; i < count; i++)
    {
        std::cout << list[i] << ", ";
    }
    std::cout << "]";
    
    
    
}