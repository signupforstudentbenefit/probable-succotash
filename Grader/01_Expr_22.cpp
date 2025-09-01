#include <iostream>
#include <cmath>

int main()
{
    double x_e , y_e , r_e , r_p , x_m , y_m , x_p , y_p;
    std::cin >> x_e >> y_e >> r_e >> r_p >> x_m >> y_m ;
    double distance = std::sqrt(std::pow(x_e-x_m,2) + std::pow(y_e-y_m,2));
    double m = r_e - r_p;
    double n = distance - m;
    x_p = ( m*x_m + n*x_e) / (m + n );
    y_p = ( m*y_m + n*y_e) / (m + n );
    std::cout << round(x_p) <<" " << round(y_p) << std::endl;
}