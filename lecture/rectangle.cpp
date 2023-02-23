/*
Name: Nicholas Elliott

Rectangle Calculator
Step 1: prompt for name
Step 2: greet name
Step 3: prompt for sides
Step 4: calc area
Step 5: calc perim
Step 6: print area and perim
*/
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

string promptName();
void greetperson(string);

template <class t1, class t2>
void promptsides(t1&, t2&);

template <class t1, class t2, class t3>
void calcarea(t1&, t2&, t3&);

void calcperim(int&, int&, int&);
void printvals(int, int, int, int);

// float calcarea(float s1, float s2) {
//     cout << "Inside float calcarea" << endl;
//     float area;
//     area = s1 * s2;
//     return area;

int main() {
    string name;
    int side1, side2;
    int rectanglearea;
//    int side1, side2;
//    int rectanglearea;
    int rectangleperim;
    // prompt name
    name = promptName();
    // greet name
    greetperson(name);
    
    //prompt for sides
    promptsides<int, int>(side1, side2);
    // side1 = promptsides();
    // side2 = promptsides();
    // cout << "DEBUG: side1: " << side1 << endl;
    // cout << "DEBUG: side2: " << side2 << endl;
    
    //calc area
    // side1 = 42.5;
    // side2 = 12.3;
    calcarea<int, int, int>(side1, side2, rectanglearea);

    //calc perim
    calcperim(side1, side2, rectangleperim);

    cout << "DEBUG: Area: " << rectanglearea << endl;
    // cout << "DEBUG: Perimiter: " << rectangleperim << endl;

    // print values
    printvals(rectanglearea, rectangleperim, side1, side2);

    return 0;
}

void printvals(int area, int perim, int s1, int s2) {
    printf("The rectangle with sides %d and %d has an area of %d and a perimiter of %d\n", s1, s2, area, perim);
    /*
    cout << "The rectangle with sides" << s1 << " and " << s2 << endl;
    cout << "Has an area of " << area << " and a perimiter of " << perim << endl;
     */
}

void calcperim( int &s1, int &s2, int &perimiter) {
    // int perimiter;
    perimiter = (2*s1) + (2*s2);
    // return perimiter;
}

template <class t1, class t2, class t3>
void calcarea(t1 &s1, t2 &s2, t3 &area) {
    // cout << "Inside int clacarea" << endl;
    // int area;
    area = s1 * s2;
    // return area;
}

template <class t1, class t2>
void promptsides(t1 &side1, t2 &side2) {
    // int rectangleside;
    cout << "Please enter the a side of a rectangle seperated by a space: ";
    cin >> side1 >> side2;
    // return rectangleside;
}

void greetperson(string playername) {
    cout << "Welcome " << playername << " to my rectangle calculator" << endl;
}

string promptName() {
    string personName;

    cout << "Please enter your name: ";
    getline(cin, personName);

    return personName;
}