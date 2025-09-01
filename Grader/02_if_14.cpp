#include <iostream>

int main ()
{
    std::string IDone, IDtwo;
    double   GPAXone, GPAXtwo;
    char comprogone, cal1one, cal2one, comprogtwo, cal1two ,cal2two;
    bool pass1one = true, pass1two = true;
    std::cin >> IDone >> GPAXone >> comprogone >> cal1one >> cal2one;
    std::cin >> IDtwo >> GPAXtwo >> comprogtwo >> cal1two >> cal2two;
    if (!(comprogone == 'A' && cal1one <= 'C' && cal2one <= 'C' ))
    {
        pass1one = false;
    } 
    if  (!( comprogtwo == 'A' && cal1two <= 'C' && cal2two <= 'C' ))
    {
        pass1two = false;
    } 
    if (pass1one == false && pass1two == false)
    {
        std::cout << "None" << std::endl;
        return 0;
    }
    if (pass1one == false)
    {
        std::cout << IDtwo << std::endl;
        return 0;
    }
    if (pass1two == false)
    {
        std::cout << IDone << std::endl;
        return 0;
    }
    if ( GPAXone > GPAXtwo)
    {
        std::cout << IDone << std::endl;
        return 0;
    }
    if ( GPAXone < GPAXtwo)
    {
        std::cout << IDtwo << std::endl;
        return 0;
    }
    // from this point things will be unintuitive //
    // Hint : ASCII
    if ( cal1one < cal1two)
    {
        std::cout << IDone << std::endl;
        return 0;
    }
    if ( cal1one > cal1two)
    {
        std::cout << IDtwo << std::endl;
        return 0;
    }
    if ( cal2one < cal2two)
    {
        std::cout << IDone << std::endl;
        return 0;
    }
    if ( cal2one > cal2two)
    {
        std::cout << IDtwo << std::endl;
        return 0;
    }
    std::cout << "Both" <<std::endl;
}