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
    cout << endl;

    cout << "Stage 0" << endl;

    cout << "     |-----------------\n";
    cout << "     |/         |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "===========\n";
    cout << endl;

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
    cout << endl;

    cout << "Stage 2" << endl;

    cout << "Opposing player tries to guess your word one letter at a time" << endl;
    cout << "If the opposing player is correct, you simply fill in the letter" << endl;
    cout << "If opposing player is wrong, you add a piece to the stickman on the gallow." << " As well as writing down the incorrect letter" << endl;
    cout << "The first piece of the stickman will look like this..." << endl;

    cout << "     |-----------------\n";
    cout << "     |/         |\n";
    cout << "     |          O\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "===========\n";
    cout << endl;

    cout << "Stage 3" << endl;
    
    cout << "Continue this process until the word is guessed, or the stickman is complete" << endl;
    cout << "For each letter they guess correctly, a piece of the stickman may be removed from the gallow" << endl;
    cout << "The second piece of the stickman will look like this..." << endl;

    cout << "     |-----------------\n";
    cout << "     |/         |\n";
    cout << "     |          O\n";
    cout << "     |          |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "===========\n";
    cout << endl;

    cout << "Stage 4" << endl;

    cout << "The next piece of the stickman will look like this..." << endl;

    cout << "     |-----------------\n";
    cout << "     |/         |\n";
    cout << "     |          O\n";
    cout << "     |          |\\\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "===========\n";
    cout << endl;

    cout << "Stage 5" << endl;

    cout << "The next piece will be as seen below..." << endl;

    cout << "     |-----------------\n";
    cout << "     |/         |\n";
    cout << "     |          O\n";
    cout << "     |         /|\\\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "===========\n";
    cout << endl;

    cout << "Stage 6" << endl;

    cout << "The second to last piece of the stickman will look like this..." << endl;

    cout << "     |-----------------\n";
    cout << "     |/         |\n";
    cout << "     |          O\n";
    cout << "     |         /|\\\n";
    cout << "     |           \\\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "===========\n";
    cout << endl;

    cout << "Stage 7" << endl;

    cout << "The stickman fully completed will look like this..." << endl;

    cout << "     |-----------------\n";
    cout << "     |/         |\n";
    cout << "     |          O\n";
    cout << "     |         /|\\\n";
    cout << "     |         / \\\n";
    cout << "     |\n";
    cout << "     |\n";
    cout << "===========\n";


}