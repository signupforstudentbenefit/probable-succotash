#include <iostream>
#include <cmath>

int main(void)
{
     double a = std::tgamma(11) / std::pow(8,8);
    double b = std::log(9.7);
    double c = 7 /std::sqrt(71) - std::sin(40*M_PI/180);
    double d  = std::pow(1.2,std::cbrt(2.3));
    double answer = (M_PI - a + std::pow(b,c)) / d ;
std::cout << answer << std::endl;  
}
