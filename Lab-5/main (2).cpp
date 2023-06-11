#include <iostream>

using namespace std;

enum choices {ROCK, PAPER, SCISSORS, TIE};
int gameCount,winCount1,winCount2,gamewinner;

void displayRules() {
    cout << "  Welcome to the game of Rock, Paper, " 
         << "and Scissors." << endl;
    cout << "  This is a game for two players. For each "
         << "game, each" << endl;   
    cout << " player selects one of the objects, Rock, "
         << "Paper or Scissors." << endl;
    cout << " The rules for winning the game are: " << endl;
    cout << "1. If both players selects the same object, it "
         << "is a tie." << endl;
    cout << "2. Rock breaks Scissors: So player who selects "
         << "Rock wins." << endl;
    cout << "3. Paper covers Rock: So player who selects " 
         << "Paper wins." << endl;
    cout << "4. Scissors cuts Paper: So player who selects "
         << "Scissors wins." << endl << endl;
    cout << "Enter R or r to select Rock, P or p to select "
         << "Paper, and S or s to select Scissors." << endl;
}

bool validSelection(char x) {

    bool isValid;

    switch(x) {
        case 'R':
            isValid = 1;
            break;
        case 'r':
            isValid = 1;
            break; 
        case 'P':
            isValid = 1;
            break;
        case 'p':
            isValid = 1;
            break;
        case 'S':
            isValid = 1;
            break;
        case 's':
            isValid = 1;
            break;
        default:
            isValid = 0;
            break;
    }

    return isValid;
}

// change to enum type
choices retrievePlay(char x) {

    choices playerChoice;

    
    if(x == 'R' || x == 'r'){
        playerChoice = ROCK;
    } else if(x == 'S' || x == 's'){
        playerChoice = SCISSORS;
    } else {
        playerChoice = PAPER;
    }
    

    return playerChoice;
}


choices winningObject(choices p1, choices p2) {

    choices winner;

    if(p1 == p2) {
        winner = TIE;
        return winner;
    }

    switch(p1){
        case ROCK:
            if(p2 == SCISSORS){
                winner = ROCK;
            }else{
                winner = PAPER;
            }
            break;
        case PAPER:
            if(p2 == ROCK){
                winner = PAPER;
            } else {
                winner = SCISSORS;
            }
            break;
        case SCISSORS:
            if(p2 == PAPER){
                winner = SCISSORS;
            } else {
                winner = ROCK;
            }
            break;
        default:
            break;
    }

    return winner;
}


string convertEnum(choices x) {

    string cValue;

    switch(x){
        case ROCK:
            cValue = "Rock";
            break;
        case SCISSORS:
            cValue = "Scissors";
            break;
        case PAPER:
            cValue = "Paper";
            break;
    }

    return cValue;
}

void gameResult(choices p1, choices p2, choices winner) {

    cout << "Player 1 played: " << convertEnum(p1) << "\n";
    cout << "Player 2 played: " << convertEnum(p2) << "\n";

    if(winner == TIE){
        cout << "The game is a tie \n";
    } else if(p1 == winner) {
        cout << "Player 1 wins \n";
        winCount1++;
    } else {
        cout << "Player 2 wins \n";
        winCount2++;
    }
    
}

void displayResults(){
    cout << "Rounds played: " << gameCount << "\n";
    cout << "Player 1's score: " << winCount1 << "\n";
    cout << "Player 2's score: " << winCount2 << "\n";

}




int main() {
       
    char response,selection1,selection2;

    
    displayRules();

    cout << "Enter y if you want to play and n if you don't" << endl;

    cin >> response;

    while(response == 'y'){

        bool validChoice1 = 0;
        bool validChoice2 = 0;

        // first player choice
        cout << "Player 1's turn \n";
        cin >> selection1;

        while(!validChoice1) {

            if(validSelection(selection1)) {
                validChoice1 = 1;
            }else {
                cin >> selection1;
            }
        }

        // second player choice
        cout << "Player 2's turn \n";
        cin >> selection2;

        while(!validChoice2) {

            if(validSelection(selection2)) {
                validChoice2 = 1;
            }else {
                cin >> selection2;
            }
        }


        gameCount++;

        choices p1_choice = retrievePlay(selection1);
        choices p2_choice = retrievePlay(selection2);
        choices winner = winningObject(p1_choice, p2_choice);

        gameResult(p1_choice, p2_choice, winner);


        // Exit game 
        cout << "Play Again?" << endl;

        cin >> response;
    }


    displayResults();

}