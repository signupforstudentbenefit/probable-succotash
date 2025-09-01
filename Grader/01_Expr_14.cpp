#include <iostream>
#include <cmath>

int main(void)
{
    int ps, y;
    std::cin >> ps;
    y = (ps - 543) % 100;
    int date = (y + y/4 + 11) % 7;
    std::cout << date << std::endl;
}