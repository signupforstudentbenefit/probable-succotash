#include <iostream>
#include <string>

std::string spelling3digitnum( int input);
std::string numtostr(int a);
bool isfirstprinted = true;
bool isfirstprint3digit = true;
bool isfirstspacedeletionnotused = true;
int main()
{
    long long  numtospell;
    std::string number;
    std::cin >> number;
    long long num = std::stoll(number);
    if (num < 10)
    {
        std::cout << numtostr(num);
        isfirstprinted = false;
    }
    
    if (num > 1e12)
    {
        numtospell = num / 1e12;
        if (numtospell != 0 )
        {
        std::cout << spelling3digitnum(numtospell) << " trillion";
        isfirstprinted = false;
        }
        num -= numtospell*1e12;
    }
    if (num > 1e9)
    {
        numtospell = num / 1e9;
        if (numtospell != 0 )
        {
        std::cout << spelling3digitnum(numtospell) << " billion";
        isfirstprinted = false;
        }
        num -= numtospell*1e9;
    }
    if (num > 1e6)
    {
        numtospell = num / 1e6;
        if (numtospell != 0 )
        {
        std::cout << spelling3digitnum(numtospell) << " million";
        isfirstprinted = false;
        }
        num -= numtospell*1e6;
    }
    if (num > 1e3)
    {
        numtospell = num / 1e3;
        if (numtospell != 0 )
        {
        std::cout << spelling3digitnum(numtospell) << " thousand";
        isfirstprinted = false;
        }
        num -= numtospell*1e3;
    }
    if (num > 1e1)
    {
        numtospell = num / 1e0;
        
        std::cout << spelling3digitnum(numtospell);
        isfirstprinted = false;
        num -= numtospell*1e0;
    }
    
    
}

std::string spelling3digitnum( int input )
{
    std::string output = "";
    if (isfirstprinted && isfirstspacedeletionnotused && input < 20)
    {
        output +="";
        isfirstspacedeletionnotused = false;
    }else  output +=" ";
    int hundred = input / 1e2;
    if (hundred != 0)
    {
        output += numtostr(hundred);
        output += " hundred";
    }
    input -= hundred*1e2;

    if (isfirstprinted && isfirstspacedeletionnotused && input < 20)
    {
        output +="";
        isfirstspacedeletionnotused = false;
    }else  output +=" ";

    switch (input)
    {
    case 10:
    output += "ten";
    return output;
    case 11:
    output += "eleven";
    return output;
    case 12:
    output += "twelve";
    return output;
    case 13:
    output += "thirteen";
    return output;
    case 14:
    output += "fourteen";
    return output;
    case 15:
    output += "fifteen";
    return output;
    case 16:
    output += "sixteen";
    return output;
    case 17:
    output += "seventeen";
    return output;
    case 18:
    output += "eighteen";
    return output;
    case 19:
    output += "nineteen";
    return output;
    

    default:
        break;

    }

    int tens = input / 10;
    if (isfirstprinted && isfirstspacedeletionnotused )
    {
        output +="";
        isfirstspacedeletionnotused = false;
    }else  output +=" ";
    
    switch (tens)
    {
    
    case 2: output += "twenty"; break;
    case 3: output += "thirty"; break;
    case 4: output += "forty"; break;
    case 5: output += "fifty"; break;
    case 6: output += "sixty"; break;
    case 7: output += "seventy"; break;
    case 8: output += "eighty"; break;
    case 9: output += "ninety"; break;
    default: break;
    }
    if (isfirstprint3digit)
    {
        output += "";
        isfirstprint3digit = false;
    }
    
    int ones = input % 10;
    if ( ones != 0)
    {
        output += numtostr(ones);
    }
    return output;
    
    
}

std::string numtostr(int a)
{
    std::string output = "";
    if (isfirstprinted && isfirstspacedeletionnotused)
    {
        output +="";
        isfirstspacedeletionnotused = false;
    }else output += " ";
    switch (a)
    {
    case 0: output += "zero"; break;
    case 1: output += "one"; break;
    case 2: output += "two"; break;
    case 3: output += "three"; break;
    case 4: output += "four"; break;
    case 5: output += "five"; break;
    case 6: output += "six"; break;
    case 7: output += "seven"; break;
    case 8: output += "eight"; break;
    case 9: output += "nine"; break;
    default: break;
    }
    return output;
}
