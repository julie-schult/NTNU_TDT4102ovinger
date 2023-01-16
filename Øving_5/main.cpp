#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"
#include "Blackhack.h"
//------------------------------------------------------------------------------

int main()
{
	int a=0;
	cout<<"Funskjonstesting: ";
	cin>>a;
		switch(a){
			case 0:
				break;
			case 1:
				cout<<SuitToString(Suit::clubs)<<endl;
				break;
			case 2:
				cout<<RankToString(Rank::five)<<endl;
				break;
			case 3:
				{Card kort(Suit::clubs, Rank::seven);
				string test=kort.toStringShort();
				cout<<test<<endl;
				break;}
			case 4:
				{Blackjack play;
				play.startGame();
				play.checkActive();
				play.dealersTurn();
				play.checkResult();
				play.checkCards();
				break;}
		}
}

//------------------------------------------------------------------------------
