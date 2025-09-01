#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;





vector<string> split(string line, char delimiter) 
{
    vector<string> result;
    int count = line.length();
    std::string placeholder = "";
    for (size_t i = 0; i < count; i++)
    {
        
        if (line[i] != delimiter )
        {
           placeholder += line[i];

        }else if (line[i] == delimiter && isalnum(line[i-1]) )
        {
            result.push_back(placeholder);
        placeholder = "";
        }else
        {
        ;
        }        
        
    }
    return result;
    
    

}
int main() 
{
string line;
getline(cin, line);
string delim;
getline(cin, delim);
for (string e : split(line, delim[0])) {
cout << '(' << e << ')';
}
}
