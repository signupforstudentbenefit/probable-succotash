#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
int main()
{
    std::string input = "";
    std::string placeholder ="";
    std::getline(std::cin, input);
    int count = input.length() , numbercounter = 1;
    std::vector<int> actualnum ={};
    for (size_t i = 0; i < count; i++)
    {
        if (input[i] == ' ')
        {
            numbercounter++;
        }
    }
    for (size_t i = 0; i < numbercounter; i++)
    {

        if (input[i] != ' ')
        {
            placeholder +=input[i];
        }else {
        actualnum.push_back(std::stoi(placeholder));
            placeholder = "";
        }
        
    }
    std::sort(actualnum.begin(),actualnum.begin()+numbercounter);
    for (auto i : actualnum)
    {
        std::cout << i << " ";
    }
    
    int numbersofdifferentnumbers = 0;
    for (size_t i = 0; i < numbercounter; i++)
    {
        if (i != 0)
        {
            if (actualnum[i] != actualnum[i-1])
            {
                numbersofdifferentnumbers++;
            }
            
        }
        
    }
    std::cout << numbersofdifferentnumbers << std::endl;
    if (numbersofdifferentnumbers > 10)
    {
        count = 10;
    }
    
    for (size_t i = 0; i < count ; i++)
    {
        if (i != 0)
        {
            std::cout << " ";
        }
        if (actualnum[i] != actualnum[i-1])
            {
                std::cout << actualnum[i];
            }
        
        
    }
    
    
    
    
    
    
    

}