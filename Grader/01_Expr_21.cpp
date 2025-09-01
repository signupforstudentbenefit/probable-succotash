#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
int h1,m1,s1, h2,m2,s2;
cin >> h1 >> m1 >> s1;
cin >> h2 >> m2 >> s2;
int t1 = h1*60*60 + m1*60 + s1 ;
int t2 = h2*60*60 + m2*60 + s2 + 24*60*60;
int dh = 0,dm = 0,ds = 0 ;
ds = t2 - t1;
//

//
dh = ds / (60*60);
ds -= dh * 60*60;
dm = ds / 60;
ds -= dm*60;

//
ds = (ds + 60) % 60;
dm = (dm + 60) % 60;
dh = (dh + 24) % 24;


//


cout << dh << ':' << dm << ':' << ds<< endl ;
}