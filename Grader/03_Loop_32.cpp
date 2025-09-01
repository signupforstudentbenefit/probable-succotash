#include <iostream>
#include <string>

int points(char c);

int main()
{
    int count, len, pointeachround, lastaddressof_R_pairer,numoflastchartocheck;
    char c;
    bool gotonextround ;
    std::string  text ;
    std::string err = "WRONG_INPUT";
    std::string lastchecker = "YGNBPK";
    std::cin >> count;
    std::cin.ignore();

    for (size_t i = 0; i < count; i++)
    {
        text = "";
        gotonextround = false;
        len = 0;pointeachround = 0; lastaddressof_R_pairer = 0 ;numoflastchartocheck = 0;
        while (std::cin >> c )
        {
            text += c;
            if(std::cin.peek() == '\n')
            {
                break;
            }
        }
        //   std::cout << text << std::endl; continue;
        len = text.length();
        if (text[0] != 'R')
        {
            std::cout << err << std::endl;
            continue;
        }
        
        for (size_t j = 0; j < len; j++)
        {
            if (j != 0 && text[j] == 'R')
            {
                if (text[j-1] == 'R')
                {
                    std::cout << err << std::endl;
                    gotonextround = true;
                    break;
                }
                
            }
            
            if (text[j] == 'R')
            {
                lastaddressof_R_pairer = j;
            }
            
            
            pointeachround += points(text[j]);
            
            
            
        }
        if (gotonextround)
            {
                continue;
            }
        lastaddressof_R_pairer += 1 ;
        if (-lastaddressof_R_pairer == len )
        {
            std::cout << pointeachround <<std::endl;
            continue;
        }
        
        if ( text[0] == 'R')
        {
            if ( len == 1 || lastaddressof_R_pairer == len - 1 )
            {
            std::cout << pointeachround <<std::endl;
            continue;
            }
    }
        

        numoflastchartocheck = len - lastaddressof_R_pairer ;
        if (numoflastchartocheck > 6)
        {
            std::cout << err << std::endl;
            continue;
        }
        
        if ((lastaddressof_R_pairer + 1 <=  len ))
        {
            if  (text.substr(lastaddressof_R_pairer+1, numoflastchartocheck) != lastchecker.substr(0,numoflastchartocheck))
        {
            std::cout << err << std::endl;
            continue;
        }
        }
        
        
        std::cout << pointeachround <<std::endl;





        
        
        
    }
    
}


int points(char c)
{
    switch (c)
    {
    case 'R':
    return 1;
    break;
    case 'Y':
    return 2;
    break;
    case 'G':
    return 3;
    break;
    case 'N':
    return 4;
    break;
    case 'B':
    return 5;
    break;
    case 'P':
    return 6;
    break;
    case 'K':
    return 7;
    break;
    
    
    default:
    return 0;
        break;
    }
}

/* 


01 234567 8
RB YGNBPK B
lastadressof_R_pairer = 0 + 1;
len = 8 
start to search from &(lastadressof_R_pairer + 1) ->  






*/