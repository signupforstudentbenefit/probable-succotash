#include <iostream>

int main()
{
    float s = 0;
    std::cin >> s;
    if (s >= 80)
    {
    std::cout << "A" << std::endl;
    return 0;
    }
    if (s >= 70)
    {
    std::cout << "B" << std::endl;
    return 0;
    }
    if (s >= 60)
    {
    std::cout << "C" << std::endl;
    return 0;
    }
    if (s >= 50)
    {
    std::cout << "D" << std::endl;
    return 0;
    }
    {
    std::cout << "F" << std::endl;
    return 0;
    }
}