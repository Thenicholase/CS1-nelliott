/*
Name: Nicholas Elliott

Functions pass-by-reference/pass-by-value
*/
#include <iostream>

using namespace std;

void promptsides(int&, int&);

int main() {
    int s1, s2;

    // cout << "The memory address inside of main for s1 is: " << &s1 << endl;
    promptsides(s1, s2);
    // cout << "The memory address insids of main for s2 is: " << &s2 << endl;
    // promptsides(s2);

    cout << "You entered: " << s1 << " " << s2 << endl;

    return 0;
}

void promptsides(int &side1, int &side2) {
    
    //cout << "The memory address inside promptsides is: " << &side1 << endl;

    cout <<"Please enter the sides of a rectangle: ";
    cin >> side1 >> side2;
    // return side1;
}