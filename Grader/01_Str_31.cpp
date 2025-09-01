#include <iostream>
#include <string>
#include <cmath>

long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
    }

int main()
{
    std::string I , J , K ;
    std::cin >> I >> J >> K ;
    int B = J.length();
    int C = K.length();
    int numerator = 0;
    int denominator = 0;
    denominator = std::pow(10,B)* (std::pow(10,C)-1);
    numerator =( (stoi(I))*std::pow(10,B)+stoi(J))*(std::pow(10,C)-1)+ stoi(K);
    int hrm = gcd(numerator, denominator);
    numerator /= hrm;
    denominator /= hrm;
    std::cout << numerator << " / " << denominator << std::endl;
    






}