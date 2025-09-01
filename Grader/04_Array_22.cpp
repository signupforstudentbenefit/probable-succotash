#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    int NumberOfCards;
    std::cin >> NumberOfCards;
    int HalfPile = NumberOfCards / 2 ;
    std::string CardOrders[NumberOfCards],ListofInstruction;
    for (int  i = 0; i < NumberOfCards; i++)
    {
        std::cin >> CardOrders[i];
    }
     std::cin.ignore();
    std::getline(std::cin , ListofInstruction);
    int instuctionlength = ListofInstruction.length();
    for (int i = 0; i < instuctionlength; i++)
    {
        if (ListofInstruction[i] == 'C')
        {
            for (int j = 0; j < HalfPile; j++)
            {
                std::swap(CardOrders[j],CardOrders[j+HalfPile]);
            }
            
        }else if (ListofInstruction[i] == 'S')
        {
            std::string FirstPile[HalfPile],SecondPlie[HalfPile];
            for (int i = 0; i < HalfPile; i++)
            {
                FirstPile[i] = CardOrders[i];
                SecondPlie[i] = CardOrders[i+HalfPile];
            }
            for (int i = 0; i < NumberOfCards; i++)
            {
                if (i % 2 == 0)
                {
                    CardOrders[i] = FirstPile[i/2];
                }else CardOrders[i] = SecondPlie[(i-1)/2];
            }
        }
    }
    for (int i = 0; i < NumberOfCards; i++ )
    {
        std::cout << CardOrders[i];
        if (i != NumberOfCards - 1)
        {
            std::cout << " ";
        }
        
    }
    
}
