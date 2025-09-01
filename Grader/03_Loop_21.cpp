#include <iostream>
#include <string>
#include <cctype>

int main()
{
     std::string password;
    while (std::cin >> password)
{
    // check password lenght
    int length = password.length(), upper = 0, lower = 0, digit = 0, punct = 0;
    // check Upper&Lower&Digit&Punct
    for (char c : password)
    {
        if (std::isupper(c))
        {
            upper++;
        }else if (std::islower(c))
        {
            lower++;
        }else if (std::isdigit(c))
        {
            digit++;
        }else punct++;
        
        
    }
    // check strong
    if (length >= 12 && upper*lower*digit*punct != 0)
    {
       std::cout << ">> strong\n";
    }else if (length >= 8 &&  upper*lower*digit != 0) // check weak
    {
        std::cout << ">> weak\n";
    }else std::cout << ">> invalid\n";
    }
}