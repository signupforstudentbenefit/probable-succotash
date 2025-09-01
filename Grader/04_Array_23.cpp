#include <iostream>
#include <string>

int main()
{
    int NumbersOfCountry= 0, TotalEntryFee= 0;
    std::string TravelingHistory;
    std::cin >> NumbersOfCountry;
    typedef struct 
    {
        std::string Country;
        int EntryFee;
    }CountryandFee;
    CountryandFee Info[NumbersOfCountry];
    for (int i = 0; i < NumbersOfCountry; i++)
    {
        std::cin >> Info[i].Country >> Info[i].EntryFee;
    }
    std::cin.ignore();
    std::getline( std::cin, TravelingHistory);
    int TravelingSteps = (TravelingHistory.length() + 1)/ 7;
    typedef struct 
    {
        std::string Name;
        std::string Country;
    }airport;
    airport ListofAirport[TravelingSteps];
    for (int i = 0; i < TravelingHistory.length() ; i++)
    {
        if (i % 7 == 3)
        {
        ListofAirport[(i-3) / 7].Name = TravelingHistory.substr(i-3,3);
        ListofAirport[(i-3) / 7].Country = TravelingHistory.substr(i+1,2);
        }
    }
    for (int i = 1; i < TravelingSteps; i++)
    {
        if (ListofAirport[i-1].Country != ListofAirport[i].Country)
        {
           for (int j = 0; j <  NumbersOfCountry ; j++)
           {
                if (ListofAirport[i].Country == Info[j].Country )
                {
                    TotalEntryFee+=Info[j].EntryFee;
                    break;
                }
           }
        }
    }
    std::cout << TotalEntryFee << std::endl;
}