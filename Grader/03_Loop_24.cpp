#include <iostream>
#include <string>

int main()
{
    std::string text = "",output = "", placeholder = "";
    int konstant = 0, charrepeated = 0, charprinted = 0;
    bool isprinted = false;
    std::cin >> text ;
    int count = text.length();
    for (size_t i = 0; i < count; i++)
    {
         if ( (i != 0 && text[i] != text[i-1]) )
        {
            std::cout << placeholder[0] << " " << charrepeated;
            placeholder = "";
            charrepeated = 0;
            isprinted = true;
            if (i != count - 1)
            {
                std::cout << " ";
            }
            
            
        }
        placeholder += text[i];
        charrepeated++;

        
    }
    if (charprinted != 1 && isprinted)
    {
        std::cout <<" ";
    }
    
    std::cout << placeholder[0] << " " << charrepeated;
    
    


}