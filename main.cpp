/* Benjamin Charles & Noah Krause 

   Final Project 

    4/19/17

*/
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

vector<string> r1, r2, r3, r4, r5, r6, r7, r8;
int r1Loc, r2Loc, r3Loc, r4Loc, r5Loc, r6Loc, r7Loc, r8Loc;
int game = 1, endGame = 0;

void checkGame();
void twoPlayerChoices(string choice1, string choice2);
void p1Choice(string choice);
void p2Choice(string choice);
void p2CompChoice(string choice);
void initVector(vector<string> &v1);
void newGame();
void drawBoard(string PlayerOne);
void drawBoard(string PlayerOne, string playerTwo);

int main() {

    initVector(r1);
    newGame();
    
    return 0;
}

void newGame() {

    string playerNum;

    cout << "**** Welcome to Connect Four! ****" << endl;
    cout << endl;

    cout << "Please enter the number of players (1 or 2): ";
    cin >> playerNum;

    while( atoi(playerNum.c_str()) != 1 && atoi(playerNum.c_str()) != 2) {
        cout << "Invalid input: Please enter either 1 or 2: ";
        cin >> playerNum;
    }

    if(atoi(playerNum.c_str()) == 2) {

        string playerOne;
        string playerTwo;

        cout << "You have chosen " << playerNum << " players." << endl << endl;
        cout << "Enter the name of Player 1: ";
        cin >> playerOne;
        cout << "Enter the name of Player 2: ";
        cin >> playerTwo;
        cout << endl;

        cout << "You will now begin a new game " << playerOne << " & ";
        cout << playerTwo << "." << endl;
        cout << playerOne << " will go first. Your symbol is \"XX\"." << endl;
        cout << playerTwo << "'s symbol is \"OO\"." << endl;

        cout << endl << "To choose a space on the board,"
        << " enter the column of said space. Ex: C4.";
        cout << endl << endl;

        while(game != 0) {
            checkGame();  
            drawBoard(playerOne, playerTwo);
        }

    } else {

        string playerOne;

        cout << "You have chosen " << playerNum << " player." << endl << endl;
        cout << "Enter the name of Player 1: ";
        cin >> playerOne;
        cout << endl;

        cout << "You will now begin a new game against the computer." << endl;
        cout << "You will go first " << playerOne << ".";
        cout << " Your symbol is \"XX\"." << endl;
        cout << "The computer's symbol is \"OO\"." << endl;
    
        cout << endl << "To choose a space on the board,"
        << " enter the column of said space. Ex: C4.";
        cout << endl << endl;
        
        while(game != 0) {
            checkGame();
            drawBoard(playerOne);
        }
    }
}

void drawBoard(string playerOne, string playerTwo) {

    string playerOneChoice, playerTwoChoice;

    cout << "| C1 | C2 | C3 | C4 | C5 | C6 | C7 | C8 |" << endl;
    cout << "-----------------------------------------" << endl;
    for(int i = 0; i < 6; i++) {
        cout << "| " << r1[i] << " | " << r2[i] << " | " << r3[i] << " | ";
        cout << r4[i] << " | " << r5[i] << " | " << r6[i] << " | " << r7[i];
        cout << " | " << r8[i] << " |" << endl;
        cout << "-----------------------------------------" << endl;
    }

    cout << endl;
    cout << playerOne << " please enter your choice: ";
    cin >> playerOneChoice;
    p1Choice(playerOneChoice);

    cout << playerTwo << " please enter your choice: ";
    cin >> playerTwoChoice;
    p2Choice(playerTwoChoice);
    cout << endl;

}

void drawBoard(string playerOne) {

    int randVal;
    string playerOneChoice, compChoice = "C";

    cout << "| C1 | C2 | C3 | C4 | C5 | C6 | C7 | C8 |" << endl;
    cout << "-----------------------------------------" << endl;
    for(int i = 0; i < 6; i++) {
        cout << "| " << r1[i] << " | " << r2[i] << " | " << r3[i] << " | ";
        cout << r4[i] << " | " << r5[i] << " | " << r6[i] << " | " << r7[i];
        cout << " | " << r8[i] << " |" << endl;
        cout << "-----------------------------------------" << endl;
    }

    cout << endl;
    cout << playerOne << " please enter your choice: ";
    cin >> playerOneChoice;
    p1Choice(playerOneChoice);

    randVal = rand() % 8 + 1;
    compChoice += to_string(randVal);
    p2CompChoice(compChoice);
    cout << endl;
}

void initVector(vector<string> &v1) {

    for(int i = 0; i < 6; i++) {    
        v1.push_back("  ");
    }

    r1Loc = 5;
    r8Loc = r7Loc = r6Loc = r5Loc = r4Loc = r3Loc = r2Loc = r1Loc;
    r8 = r7 = r6 = r5 = r4 = r3 = r2 = r1;    
}

void p1Choice(string choice1) {

    if(choice1 == "C1") {
        if(r1Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p1Choice(choice);
        } else {
            r1.at(r1Loc) = "XX";
            r1Loc--;
        }

     } else if(choice1 == "C2") {
        if(r2Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p1Choice(choice);
        } else {
            r2.at(r2Loc) = "XX";
            r2Loc--;
        }

    } else if(choice1 == "C3") {
        if(r3Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p1Choice(choice);
        } else { 

            r3.at(r3Loc) = "XX";
            r3Loc--;
        }

    } else if(choice1 == "C4") {
        if(r4Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p1Choice(choice);
        } else {

            r4.at(r4Loc) = "XX";
            r4Loc--;
        }

    } else if(choice1 == "C5") {
        if(r5Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p1Choice(choice);
        } else {

            r5.at(r5Loc) = "XX";
            r5Loc--;
        }

    } else if(choice1 == "C6") {
        if(r6Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p1Choice(choice);
        } else {

            r6.at(r6Loc) = "XX";
            r6Loc--;
        }


    } else if(choice1 == "C7") {
        if(r7Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p1Choice(choice);
        } else {

            r7.at(r7Loc) = "XX";
            r7Loc--;
        }

    } else if(choice1 == "C8") {
        if(r8Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p1Choice(choice);
        } else {

            r8.at(r8Loc) = "XX";
            r8Loc--;
        }

    } else {
        cout << "Please enter a valid column, C1 - C8: ";
        string choice;
        cin >> choice;
        p1Choice(choice);
    }
}

void p2Choice(string choice2) {

    if(choice2 == "C1") {
        if(r1Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p2Choice(choice);
        } else {

            r1.at(r1Loc) = "OO";
            r1Loc--;
        }

     } else if(choice2 == "C2") {
        if(r2Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p2Choice(choice);
        } else {

            r2.at(r2Loc) = "OO";
            r2Loc--;
        }

    } else if(choice2 == "C3") {
        if(r3Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p2Choice(choice);
        } else {

            r3.at(r3Loc) = "OO";
            r3Loc--;
        }

    } else if(choice2 == "C4") {
        if(r4Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p2Choice(choice);
        } else {

            r4.at(r4Loc) = "OO";
            r4Loc--;
        }

    } else if(choice2 == "C5") {
        if(r5Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p2Choice(choice);
        } else {

            r5.at(r5Loc) = "OO";
            r5Loc--;
        }

    } else if(choice2 == "C6") {
        if(r6Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p2Choice(choice);
        } else {

            r6.at(r6Loc) = "OO";
            r6Loc--; 
        }

    } else if(choice2 == "C7") {
        if(r7Loc == -1) {
            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p2Choice(choice);
        } else {

            r7.at(r7Loc) = "OO";
            r7Loc--;
        }

    } else if(choice2 == "C8") {
        if(r8Loc == -1) {

            cout << "Column is filled, please choose again: ";
            string choice;
            cin >> choice;
            p2Choice(choice);

        } else {

            r8.at(r8Loc) = "OO";
            r8Loc--;
        }

    } else {
        cout << "Please enter a valid column, C1 - C8: ";
        string choice;
        cin >> choice;
        p2Choice(choice);
    }
}

void p2CompChoice(string choice2) {

    if(choice2 == "C1") {
        if(r1Loc == -1) {
            int randVal = rand() % 8 + 1;
            string choice = "C";
            choice += to_string(randVal);
            p2CompChoice(choice);
        } else {
            
            cout << "The computer's choice: " << choice2 << endl;
            r1.at(r1Loc) = "OO";
            r1Loc--;
        }

     } else if(choice2 == "C2") {
        if(r2Loc == -1) {
            int randVal = rand() % 8 + 1;
            string choice = "C";
            choice += to_string(randVal);
            p2CompChoice(choice);
        } else {

            cout << "The computer's choice: " << choice2 << endl;
            r2.at(r2Loc) = "OO";
            r2Loc--;
        }

    } else if(choice2 == "C3") {
        if(r3Loc == -1) {
            int randVal = rand() % 8 + 1;
            string choice = "C";
            choice += to_string(randVal);
            p2CompChoice(choice);
        } else {

            cout << "The computer's choice: " << choice2 << endl;
            r3.at(r3Loc) = "OO";
            r3Loc--;
        }

    } else if(choice2 == "C4") {
        if(r4Loc == -1) {
            int randVal = rand() % 8 + 1;
            string choice = "C";
            choice += to_string(randVal);
            p2CompChoice(choice);
        } else {

            cout << "The computer's choice: " << choice2 << endl;
            r4.at(r4Loc) = "OO";
            r4Loc--;
        }

    } else if(choice2 == "C5") {
        if(r5Loc == -1) {
            int randVal = rand() % 8 + 1;
            string choice = "C";
            choice += to_string(randVal);
            p2CompChoice(choice);
        } else {

            cout << "The computer's choice: " << choice2 << endl;
            r5.at(r5Loc) = "OO";
            r5Loc--;
        }

    } else if(choice2 == "C6") {
        if(r6Loc == -1) {
            int randVal = rand() % 8 + 1;
            string choice = "C";
            choice += to_string(randVal);
            p2CompChoice(choice);
        } else {

            cout << "The computer's choice: " << choice2 << endl;
            r6.at(r6Loc) = "OO";
            r6Loc--;
        }

    } else if(choice2 == "C7") {
        if(r7Loc == -1) {
            int randVal = rand() % 8 + 1;
            string choice = "C";
            choice += to_string(randVal);
            p2CompChoice(choice);
        } else {

            cout << "The computer's choice: " << choice2 << endl;
            r7.at(r7Loc) = "OO";
            r7Loc--;
        }

    } else if(choice2 == "C8") {
        if(r8Loc == -1) {
            int randVal = rand() % 8 + 1;
            string choice = "C";
            choice += to_string(randVal);
            p2CompChoice(choice);
        } else {

            cout << "The computer's choice: " << choice2 << endl;
            r8.at(r8Loc) = "OO";
            r8Loc--;
        }
    }
}

void checkGame() {

   ++endGame;

    if(endGame == 10) {

        game = 0;

    }
} 
