#include <iostream>
#include <cmath>

int main(void)
{
   double x , y ;
   std::cin >>  x  ;
   y = std::pow(x,std::sqrt(std::log(std::pow(x+1,2)))) /  (10-x);
   std::cout << round(y*1e6) /1e6 <<  std::endl;
}