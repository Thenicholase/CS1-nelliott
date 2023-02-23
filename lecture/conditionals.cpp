/*
Name: Nicholas Elliott

Conditionals
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// void sayhello()
// void playgame()

int main () {
    char num1;

    cout << "A. print nums" << endl;
    cout << "B. read nums" << endl;
    cout << "C. play game" << endl;
    cout << "D. quit" << endl;

    cout << "Please enter a selection:";
    cin >> num1;

    switch(num1) {
        case 'A':
            cout << "We will print some numbers now" << endl;
            break;
        case 'B':
            cout <<"Lets read some more numbers" << endl;
            break;
        case 67:
            cout << "Shall we play a game" <<endl;
            playgame()
            break;
        case 68:
            cout << "I guess you want to quit" << endl;
            break;
        default:
            cout << "Why do you not follow the menu...rude..." << endl;
    }



//     cout << "You entered: " << num1 << endl;
}