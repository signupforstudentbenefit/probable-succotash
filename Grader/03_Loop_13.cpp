#include <iostream>
#include <string>
#include <cctype>
int main()
{
    int numoffoundword = 0;
    bool needtocheckfront = true, needtocheckback = true;
    std::string wordtofind = "";
    std::string sentence ="";
    std::getline (std::cin,wordtofind);
    std::getline (std::cin,sentence); // get sentences and word to find
    for (size_t i = 0; i < sentence.length()-wordtofind.length() + 1; i++)
    {
        std::string placeholder = sentence.substr(i,wordtofind.length());
        needtocheckfront = true, needtocheckfront = true;
        if (i == 0 )
        {
            needtocheckfront = false;
        }else if (i == sentence.length()-wordtofind.length() )
        {
            needtocheckback = false;
        }
        
        
        if (placeholder == wordtofind)
        {
            if (needtocheckfront && isalpha(sentence[i-1]) )
            {
                continue;
            }
            if (needtocheckback && isalpha(sentence[i+wordtofind.length()]) )
            {
                continue;
            }
            
            
            numoffoundword++;
            i += wordtofind.length();
        }
        
    }
    std::cout << numoffoundword;
}
 // ABC // 
  // r A B C r
//   0 1 2 3 4