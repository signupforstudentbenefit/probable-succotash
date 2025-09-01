#include <iostream>
#include <string>

int main()
{
    std::string solution, answer;
    int points = 0;
    std::getline (std::cin, solution);
    std::getline (std::cin, answer);
    
    if (solution.length() != answer.length())
    {
        std::cout << "Incomplete answer" << std::endl;
        return 0;
    }
    int length = solution.length();
    
    for ( int i = 0 ; i <  length; i++)
    {
        if ( solution[i] == answer[i] )
        {
            points++;
        }
    }
    std::cout << points << std::endl;
}