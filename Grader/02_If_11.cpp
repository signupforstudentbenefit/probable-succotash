#include <iostream>

int main ()
{
    std::string list[27] = {"01","02","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","51","53","55","58"};
    std::string input;
    std::cin >> input;
    for (int i = 0 ; i< 27; i++)
    {
        if (list[i] == input)
        {
            std::cout << "OK" << std::endl;
            return 0;
        } 
    }
    std::cout << "Error" << std::endl;   
}