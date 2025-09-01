#include <iostream>
#include <string>
int main()
{
    std::string text;
    std::cin >> text;
    int num[12];
    int checksum = 0;
    for (int i = 0 ; i < 12 ; i++)
    {
        
        num[i] = text[i] - '0';
        checksum += ( 13 - i )*num[i];
    }
    
    int lastnum = (11 - checksum  % 11) % 10;
    std::cout << num[0] << "-" << text.substr(1,4) << "-" << text.substr(5,5) << "-" << text.substr(10,2) << "-" << lastnum << std::endl;

}


