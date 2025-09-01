#include <iostream>
#include <vector>

int main()
{
    int first;
    std::vector<int> listofnum;
    std::cin >> first;
    listofnum.push_back(first);
    int i = 0, n = 0;
    while (true)
    {
        if (listofnum[i] == 1)
        {
            break;
        }
        n = listofnum[i];
        
        if (n % 2 == 0)
        {
            listofnum.push_back(n / 2) ;
        }else listofnum.push_back(3*n + 1);
        i++;
    }

    if (listofnum.size() > 15)
    {
    listofnum.erase(listofnum.begin(),listofnum.end()-15);
    }

    int count = listofnum.size();
    for (size_t i = 0; i < count; i++)
    {
        if (i != 0)
        {
            std::cout << "->";
        }
        std::cout << listofnum[i];
        
    }

    


    
}