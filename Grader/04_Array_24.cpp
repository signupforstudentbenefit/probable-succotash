#include <iostream>
#include <algorithm>

void flip(int arr[],int n );

int main()
{
    int count = 0 ;
    int foundpivot_at;
    bool issamearray;
    std::cin >> count;
    int NumList[count], shadowNumList[count];
    for (int i = 0 ; i < count ; i++)
    {
        std::cin >> NumList[i];
        shadowNumList[i] = NumList[i];
    }
    std::sort(shadowNumList,shadowNumList+count);
    for (size_t k = 0; k < count  ; k++)
        {
            
            
            if (k != 0)
            {
                std::cout << " ";
            }
            std::cout << NumList[k];
        }
        std::cout << std::endl;



    for (size_t i = count-1; i >= 0; i--)
    {
        int pivot = shadowNumList[i];
        for (size_t j = 0; j < i ; j++)
        {
            if (NumList[j] == pivot)
            {
                if (j != i && j != 0 )
                {
                    issamearray = false;
                    flip(NumList,j+1);
                    for (size_t k = 0; k < count  ; k++)
                    {
                        
                        
                        if (k != 0)
                        {
                            std::cout << " ";
                        }
                        std::cout << NumList[k];
                    }
                    std::cout << std::endl;
                    issamearray = true;
                    for (size_t k = 0; k < count; k++)
                    {
                        
                        if (NumList[k] != shadowNumList[k])
                        {
                            issamearray = false;
                        }
                        
                    }
                    if (issamearray )
                    {
                        return 0 ;
                    }
                    
                    
                    
                }    


                {
                flip(NumList,i+1);
                for (size_t k = 0; k < count; k++)
                    {
                        
                        
                        if (k != 0)
                        {
                            std::cout << " ";
                        }
                        std::cout << NumList[k];
                    }
                    std::cout << std::endl;
                    issamearray = true;
                for (size_t k = 0; k < count; k++)
                {
                    
                    if (NumList[k] != shadowNumList[k])
                    {
                        issamearray = false;
                    }
                    
                }
                if (issamearray )
                {
                    return 0 ;
                }
                }
                break;
                
            }
            
            
        }

        
    }
    
}


void flip(int arr[],int n )
{
    for (int i = 0; i < n/2 ; i++)
    {
    std::swap(arr[i],arr[n-1-i]);
    }
    return ;
}

/*
2 3 4 5 1 
      @
      */

