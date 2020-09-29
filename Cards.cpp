// Cards.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

    //Using an uint8_t(Unsigned INT of lenght 8 bits) we use as less space as possible 1 < 4 bytes
enum cardRank : uint8_t { Ace = 1, Jack = 11 };
enum cardType : uint8_t { CLB, DIA, HRT, SPD };

constexpr const char* aceString     =   "Ace";
constexpr const char* jackString    =   "Jack";
constexpr const char* queenString   =   "Queen";
constexpr const char* kingString    =   "King";
constexpr const char* clubString    =   "Clubs";
constexpr const char* diamondString =   "Diamonds";
constexpr const char* heartString   =   "Hearts";
constexpr const char* spadeString   =   "Spades";

struct card {
    uint8_t type : 4;
    uint8_t rank : 4;
};

card deck[52] = {
    {CLB,1},{CLB,2},{CLB,3},{CLB,4},{CLB,5},{CLB,6},{CLB,7},{CLB,8},{CLB,9},{CLB,10},{CLB,11},{CLB,12},{CLB,13},
    {DIA,1},{DIA,2},{DIA,3},{DIA,4},{DIA,5},{DIA,6},{DIA,7},{DIA,8},{DIA,9},{DIA,10},{DIA,11},{DIA,12},{DIA,13},
    {HRT,1},{HRT,2},{HRT,3},{HRT,4},{HRT,5},{HRT,6},{HRT,7},{HRT,8},{HRT,9},{HRT,10},{HRT,11},{HRT,12},{HRT,13},
    {SPD,1},{SPD,2},{SPD,3},{SPD,4},{SPD,5},{SPD,6},{SPD,7},{SPD,8},{SPD,9},{SPD,10},{SPD,11},{SPD,12},{SPD,13},
};

void PrintCard(const card & c) {

    if (c.rank > 1 && c.rank < 11)
        std::cout << int(c.rank);

    else {
        switch (c.rank)
        {
        case 1:
            std::cout << aceString;
            break;
        case 11:
            std::cout << jackString;
            break;
        case 12:
            std::cout << queenString;
            break;
        case 13:
            std::cout << kingString;
            break;
        }
    }
        
    switch (c.type)
        {
        case CLB:
            std::cout << "\tof\t" <<  clubString  <<  "\n";
            break;
        case DIA:
            std::cout << "\tof\t" << diamondString << "\n";
            break;
        case HRT:
            std::cout << "\tof\t" << heartString << "\n";
            break;
        case SPD:
            std::cout << "\tof\t" << spadeString << "\n";
            break;
    }

    
};

int main()
{
       for(card c : deck)
    {
        PrintCard(c);
        if (c.rank == 13)
            std::cout << "\n";
    }

    return 0;
}

