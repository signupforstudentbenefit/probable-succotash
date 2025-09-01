#include <iostream>
#include <string>

int main()
{
    std::string text = "",output = "", placeholder = "";
    int konstant = 0, charrepeated = 0;
    std::cin >> text >> konstant;
    int count = text.length();
    for (size_t i = 0; i < count; i++)
    {
        if ( charrepeated == 0 ||text[i] == text[i-1]  )
        {
            placeholder += text[i];
            charrepeated++;
        }else if (text[i] != text[i-1]  )
        {
            if (charrepeated  < konstant)
            {
                output += placeholder;
            }
            placeholder = "";
            charrepeated = 0;
            placeholder += text[i];
            charrepeated++;
        }
        
    }
    if (placeholder != "" && charrepeated < konstant)
    {
        output += placeholder;
    }
    

    std::cout << output;
}
