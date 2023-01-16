#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"
//------------------------------------------------------------------------------

//Oppgave 1
string SuitToString(Suit suit){
    return suitString.at(suit);
}
string RankToString(Rank rank){
    return rankString.at(rank);
}

//Oppgave 2b
Card::Card(Suit suit, Rank rank)
    :s{suit}, r{rank} {}

//Oppage 2c
Suit Card::getSuit(){
    return s;
}
//Oppgave 2d
Rank Card::getRank(){
    return r;
}
//Oppgave 2e
string Card::toString(){
    return {SuitToString(s)+" of "+RankToString(r)};
}
//Oppgave 2f
string Card:: toStringShort(){
    string letter;
    switch (s)
    {
    case Suit::clubs:
        letter = "C";
        break;
    case Suit::diamonds:
        letter = "D";
        break;
    case Suit::hearts:
        letter = "H";
        break;
    case Suit::spades:
        letter = "S";
        break;
    }
    return {letter + to_string(static_cast<int>(r))};
}