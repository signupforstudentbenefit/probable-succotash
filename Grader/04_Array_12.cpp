#include <iostream>
#include <string>
#define size 10
struct person
{
    std::string firstname;
    std::string nickname;
};
 
int main()
{
    //
    person list[size];
    list[0].firstname = "Robert" ;
    list[0].nickname  = "Dick";
    list[1].firstname = "William";
    list[1].nickname  = "Bill";
    list[2].firstname = "James";
    list[2].nickname  = "Jim";
    list[3].firstname = "John";
    list[3].nickname  = "Jack";
    list[4].firstname = "Margaret"; 
    list[4].nickname  = "Peggy";
    list[5].firstname = "Edward";
    list[5].nickname  = "Ed";
    list[6].firstname = "Sarah";
    list[6].nickname  = "Sally";
    list[7].firstname = "Andrew";
    list[7].nickname  = "Andy";
    list[8].firstname = "Anthony"; 
    list[8].nickname  = "Tony";
    list[9].firstname = "Deborah"; 
    list[9].nickname  = "Debbie";
    //
    int roundstofind , found ;
    std::string input;
    std::cin >> roundstofind;
    for (int i = 0; i < roundstofind; i++)
    {
        std::cin >> input;
        found = 0;
        for (int i = 0; i < size; i++)
        {
            if(input == list[i].firstname)
            {
                std::cout << list[i].nickname << std::endl;
                found++;
                break;
            }else if (input == list[i].nickname)
            {
                std::cout << list[i].firstname << std::endl;
                found++;
                break;
            }
        } 
        if(found == 0)
        {
            std::cout << "Not found" << std::endl;
        }
    }
}
