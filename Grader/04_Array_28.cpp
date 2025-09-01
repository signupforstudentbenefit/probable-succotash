#include <iostream>
#include <string>
#include <cctype>
int main()
{
    std::string text ;
    std::getline (std::cin, text);
    int Alphabet[26];
    for (size_t i = 0; i < 26; i++)
    {
        Alphabet[i] = 0;
    }
    int count = text.length();
    for (size_t i = 0; i < count; i++)
    {
        if (islower(text[i]))
        {
            Alphabet[text[i] - 'a']++;
        }else if (isupper(text[i]))
        {
            Alphabet[text[i] - 'A']++;
        }
        
    }
    for (size_t i = 0; i < 26; i++)
    {
        if (Alphabet[i] != 0)
        {
            std::cout << (char)('a' + i) << " -> " << Alphabet[i] <<std::endl;
        }
        
    }
    
    
    
}