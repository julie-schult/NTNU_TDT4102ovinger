#pragma once
#include "std_lib_facilities.h"
//------------------------------------------------------------------------------

class Blackjack{
    private:
        CardDeck mydeck; 
        int dealer;
        int me;
        bool win;
        bool loose;
        vector<Card> myCards;
        vector<Card> dealerCards;
        void addDealer();
    
    public:
        Blackjack();
        bool active;
        void addMe();
        void startGame();
        void checkResult();
        void checkActive();
        void checkCards();
        void dealersTurn();
};
