#pragma once
#include "std_lib_facilities.h"
//------------------------------------------------------------------------------

class CardDeck {
    private:
        vector<Card> cardsInDeck;
        int x;
        int randomWithLimits(int lower, int upper);
        void swap(int a, int b);
    public:
        CardDeck();
        void print();
        void printShort();
        void shuffle();
        Card drawCard();
};