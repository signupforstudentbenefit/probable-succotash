#include <iostream>
#include <cmath>
#include <iomanip>

int main(void)
{
    double W , H ;
    std::cin >> W ;
    std::cin >> H ;
    double Mosteller = std::sqrt(W*H) / 60;
    double Haycock = 0.024265 * std::pow(W,0.5378)*std::pow(H,0.3964);
    double Boyd =0.0333 * std::pow(W,0.6157 - 0.0188*std::log10(W))*std::pow(H,0.3);
    std::cout << std::setprecision(15) << Mosteller << std::endl << std::setprecision(15) << Haycock << std::endl << std::setprecision(15) << Boyd << std::endl;
}