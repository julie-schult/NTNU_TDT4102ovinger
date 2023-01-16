#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"
#include "Blackhack.h"
//------------------------------------------------------------------------------

Blackjack::Blackjack(){
    mydeck.shuffle();
    dealer = 0;
    me = 0;
    win = false;
    loose = false;
    active = true;
}

void Blackjack::addMe(){
    Card c = mydeck.drawCard();
    myCards.push_back(c);

    int sum = static_cast<int>(c.getRank());
    if (sum >10 && sum != 14){
        sum = 10;
    }
    else if ((sum == 14) && (me >= 11)){
        sum = 1;
    }
    else if ((sum == 14) && (me < 11)){
        sum = 11;
    }

    me += sum;
}

void Blackjack::addDealer(){
    Card c = mydeck.drawCard();
    dealerCards.push_back(c);

    int sum = static_cast<int>(c.getRank());

    if(sum > 10 && sum != 14){
        sum = 10;
    }
        else if ((sum == 14) && (me >= 11)){
        sum = 1;
    }
    else if ((sum == 14) && (me < 11)){
        sum = 11;
    }
    dealer += sum;
}

void Blackjack::checkActive(){
    char svar;
    if (active){
            cout << "Draw another card? [y]/[n]" << endl;
            cin >> svar;
            if (toupper(svar)!='y'){
                    active = false;
                }  
        }   
}

void Blackjack::checkResult(){
    if (me > 21 || (active == false && me <= dealer))
    {
        loose = true;
        active = false;
        cout << "You are out of the game!" << endl
            << "Your value: " << me << ", dealer's value:"<< dealer << endl;
    }
    else if (((dealer > 21) && (me < 21) && active == false) || me == 21  || (me > dealer && (active == false))) 
    {
        win = true;
        active = false;
        cout << "You won the game! " << endl
            << "Your value: " << me << ", dealer's value: "<< dealer << endl;
    }
}

void Blackjack::checkCards(){
    int last = myCards.size();
    cout << "Your cards: " << endl;
    for (int i = 0; i < last; i++)
    {
        cout << myCards[i].toString() << endl;
    }
    
    cout << "Total value: " << to_string(me);
}

void Blackjack::dealersTurn(){
    while (dealer < 17)
    {
        addDealer();
    }
}

void Blackjack::startGame(){
    cout << "You are now playing Blackjack." << endl;
    
    addMe();
    addDealer();
    addMe();
    addDealer();

    checkCards();
    cout << "Your dealers first card is " << dealerCards[0].toString() << endl; 

}