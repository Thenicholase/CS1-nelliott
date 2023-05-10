#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "game.h"
#include <algorithm>
#include <string>

using namespace std;

int main() {
    // Read words from file into vector
    vector<string> words;
    ifstream infile("words.txt");
    if (!infile) {
        cerr << "Error: could not open file" << endl;
        return 1;
    }
    string word;
    while (infile >> word) {
        words.push_back(word);
    }
    infile.close();

    // Initialize random number generator
    srand(time(NULL));

    // Play game until player quits
    char play_again = 'y';
    while (play_again == 'y') {
        // Choose random word from vector
        int word_index = rand() % words.size();
        string secret_word = words[word_index];

        // Play game with chosen word
        play_game(secret_word);

        // Ask player if they want to play again
        cout << "Play again? (y/n): ";
        cin >> play_again;
    }

    return 0;
}


void print_guesses(const vector<char>& guesses) {
    cout << "Guesses: ";
    for (char guess : guesses) {
        cout << guess << " ";
    }
    cout << endl;
}

void print_word(const string& word, const vector<char>& guesses) {
    for (char letter : word) {
        if (find(guesses.begin(), guesses.end(), letter) != guesses.end()) {
            cout << letter << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

void play_game(const string& secret_word) {
    const int MAX_GUESSES = 8;
    vector<char> guesses;

    cout << "Welcome to Hangman!" << endl;
    cout << "The secret word has " << secret_word.length() << " letters." << endl;

    int num_guesses = 0;
    while (num_guesses < MAX_GUESSES) {
        // Print guesses and word
        print_guesses(guesses);
        print_word(secret_word, guesses);

        // Get guess from player
        cout << "Enter a letter: ";
        char guess;
        cin >> guess;

        // Check if guess is in word
        if (find(guesses.begin(), guesses.end(), guess) != guesses.end()) {
            cout << "You already guessed that letter!" << endl;
        } else if (secret_word.find(guess) != string::npos) {
            cout << "Correct!" << endl;
            guesses.push_back(guess);
            if (all_of(secret_word.begin(), secret_word.end(), [&guesses](char c) {
                return find(guesses.begin(), guesses.end(), c) != guesses.end();
            })) {
                cout << "You win!" << endl;
                return;
            }
        } else {
            cout << "Wrong!" << endl;
            num_guesses++;
        }
    }
    cout << "You lose! The secret word was " << secret_word << "." << endl;
}
