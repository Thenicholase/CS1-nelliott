// Name: Nicholas Elliott
// Section CSCI 111-001
// Date: 02/13/23
// Breaking down the stages of the hangman game
#include <iostream>
#include <string>

using namespace std;

int main () 
{
    string firstName;
    cout << "Hey there, what's your name?" << endl;
    cin >> firstName;

    cout << "Hey," << firstName << "!" << endl;
    cout << "The hangman game is under construction, maybe you'll get to play in a few weeks.." << endl;
    cout << "This is what various stages of the hangman game will look like..." << endl;

    cout << "Stage 0" << endl;

    cout << "     |-----------------\n";
    cout << "     |/         |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "===========\n";

    cout << "Stage 1" << endl;

    cout << "First, create a word for the opposing player to guess" << endl;

    cout << "     |-----------------\n";
    cout << "     |/         |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "===========\n";
    cout << "Word: _ _ _ _ _ _ _\n";

}