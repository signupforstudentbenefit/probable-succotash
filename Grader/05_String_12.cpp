#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void flip(string s,int n);

int main()
{
    string total = "0", adder;
    char numList[10];
    for (size_t i = 0; i < 10; i++)
    {
        numList[i] = i;
    }
        int alen = adder.length();
    int tlen = total.length();
    string adder = "";
    flip(total,tlen);
    while (adder != "END")
    {
    alen = adder.length();
    tlen = total.length();
    int sum;
    flip(adder,alen);
    int count = min(alen,tlen);
    for (size_t i = 0; i < count; i++)
    {   
        sum = (total[i]-'0') + (adder[i] - '0');
        total[i] =( sum % 10) - '0';
        if (sum % 10 == 1)
        {
            // total[i+1] = total
        }
        
    }
        







        cin >> adder;
    }
    
}

void flip(string s ,int n )
{
    for (int i = 0; i < n/2 ; i++)
    {
    swap(s[i],s[n-1-i]);
    }
    return ;
}
// 456 -> 654
// 127 -> 721
// 583 -> 385