#include "Mastermind.h"
#include "utilities.h"
#include "tests.h"
#include "MasterVisual.h"
#include "std_lib_facilities.h"
//------------------------------------------------------------------------------

void playMastermind(){
    int again = 1;
    while (again==1){
        MastermindWindow mwin{Point{900,20}, 500, 500, "Mastermind"}; //Gjettingvindu
        constexpr int size{4};
        constexpr int letters{6};
        int tries{0};

        string code{randomizeString(size, 'A', 'A'+letters - 1)};
        cout <<"Fasit: "<< code << endl;
        string guess{mwin.getInput(size, 'A', 'A'+letters - 1)}; //linjen for å gjette

        int right=checkCharactersAndPosition(code, guess);
        int rightchar = checkCharacters(code, guess);

        tries++;
        addGuess(mwin, guess, size, 'A', tries);
        addFeedback(mwin, right, rightchar, size, tries);

        while(right != size && tries <=letters){
            cout << guess << endl;

            cout << "You had " << rightchar << "right letters, and " << right << " characters were in the right position. Try Again " << endl;
            guess = mwin.getInput(size, 'A', 'A'+letters-1);

            addGuess(mwin, guess, size, 'A', tries);
            addFeedback(mwin, right, rightchar, size, tries);
            right = checkCharactersAndPosition(code, guess);
            rightchar = checkCharacters(code,guess);
            tries ++;
        }

        if(rightchar==size){
            cout << "YOU WON!" << endl;

        }
        else if(tries==0 && rightchar != size){
            cout << "You lost..." << endl;

        }
        cout << "Do you want to play again? 1 for yes, 0 for no: ";
        cin >> again;
        mwin.redraw();
    }
    cout << "you finished";
}

int checkCharactersAndPosition(string code, string guess){
    int same=0;
    for (int i=0; i<code.size();i++){
        if(toupper(code[i])==toupper(guess[i])){ 
            same++;
        }
    }
    return same;
}

int checkCharacters(string code, string guess){
    set<char> guessSet;
    for (char c:guess){
        guessSet.insert(toupper(c));
    }    
    int same=0;
    for (char g:guessSet){
        int guessCount = countChar(guess, g);
        int codeCount = countChar(code, g);
        same += min(guessCount,codeCount);
    }
    return same;
}