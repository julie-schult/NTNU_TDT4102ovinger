#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"
//------------------------------------------------------------------------------

//Fra øving 4, for å få forskjellige verdier
int CardDeck::randomWithLimits(int lower, int upper) {
    return ((rand() % (upper - lower)) +lower);
}

//Oppgave 3b
CardDeck::CardDeck() {
    for (int a=0;a<4;++a){
        for (int b=0;b<13;++b){
            Card c=Card(static_cast<Suit>(a),static_cast<Rank>(b));
            cardsInDeck.push_back(c);
        }
    }
}
//Oppgave 3c
void CardDeck::swap(int a, int b){
    Card kort = cardsInDeck[a];
    cardsInDeck[a] = cardsInDeck[b];
    cardsInDeck[b] = kort;
}
//Oppagave 3d
void CardDeck::print(){
    for (auto i : cardsInDeck){
        cout<<i.toString()<<endl;
    }
}
//CARD ELLER AUTO?

//Oppgave 3e
void CardDeck::printShort(){
    for (Card i : cardsInDeck){
        cout<<i.toStringShort()<<endl;
    }
}
//Oppagave 3f
void CardDeck::shuffle(){
    for(int i=0; i < 51; i++) {
        int a = randomWithLimits(0, 51);
        int b = randomWithLimits(0,51);
        swap(a, b);
    }
}
//Oppagave 3g
Card CardDeck::drawCard(){
    Card topCard = cardsInDeck[x];
    x++;
    return topCard;
}