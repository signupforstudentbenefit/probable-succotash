#include <iostream>
#include <string>

int main()
{
    std::string tel;
    std::cin >> tel;
    int N = tel.length();
   // std::cout << N << std::endl;
   std::string initial = tel.substr(0,2);
   if ((N != 10 ) )
    {
        std::cout << "Not a mobile number" ;
        return 0;
    }
    if ( initial == "06" || initial == "08" || initial == "09"  )
    {
        std::cout << "Mobile number" ;
        return 0;
    }
     std::cout << "Not a mobile number" ;
     return 0;
}