#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
    double a = 0 , b = 0  , c = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    double x_1 =  ( -b - sqrt(b*b - 4*a*c)) /(2.0*a);
    double x_2 = ( -b + sqrt(b*b - 4*a*c)) /  (2.0*a);
    cout << round(x_1*1e3)/1e3  << " " << round(x_2*1e3)/1e3 << endl; 
}  