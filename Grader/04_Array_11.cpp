#include <iostream>
#include <string>
#include <cctype>
int main()
{
    std::string text = "" ,output = "";
    std::getline(std::cin , text);
    int count = text.length();
    bool isnumberidetected[10]={false , false ,false , false ,false ,false ,false , false ,false,false};
    for (size_t i = 0 ; i < count; i++)
    {
        if (isdigit(text[i]))
        {
            isnumberidetected[text[i]-'0'] = true;
        }
        
    }
    for (size_t i = 0; i < 10; i++)
    {
        if (!isnumberidetected[i])
        {
            output += i + '0';
        }
        
    }
    int l = output.length();

    if (l == 0)
    {
        std::cout << "NONE"<< std::endl;
        return 0;
    }
    
    for (size_t i = 0; i < l; i++)
    {
        if (i != 0)
        {
            std::cout << ",";
        }
        std::cout << output[i] ;
    }
    
    
}