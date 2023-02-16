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

using namespace std;

string promptName() {
    string personName;

    cout << "Please enter your name: ";
    getline(cin, personName);

    return personName;
}

void greetperson(string playername) {
    cout << "Welcome " << playername << " to my rectangle calculator" << endl;
}

int promptsides() {
    int rectangleside;
    cout << "Please enter the a side of a rectangle: " << endl;
    cin >> rectangleside;
    return rectangleside;
}

int calcarea(int s1, int s2) {
    int area;
    area = s1 * s2;
    return area;
}

int calcperim( int s1, int s2) {
    int perimiter;
    perimiter = (2*s1) + (2*s2);
    return perimiter;
}

void printvals(int area, int perim, int s1, int s2) {
    printf("The rectangle with sides %d and %d has an area of %d and a perimiter of %d\n", s1, s2, area, perim);
    /*
    cout << "The rectangle with sides" << s1 << " and " << s2 << endl;
    cout << "Has an area of " << area << " and a perimiter of " << perim << endl;
     */
}

int main () {
   string name;
   int side1, side2;
   int rectanglearea;
   int rectangleperim;
    // prompt name
    name = promptName();
    // greet name
    greetperson(name);
    
    //prompt for sides
    side1 = promptsides();
    side2 = promptsides();
    // cout << "DEBUG: side1: " << side1 << endl;
    // cout << "DEBUG: side2: " << side2 << endl;
    
    //calc area
    rectanglearea = calcarea(side1, side2);

    //calc perim
    rectangleperim = calcperim(side1, side2);

    // cout << "DEBUG: Area: " << rectanglearea << endl;
    // cout << "DEBUG: Perimiter: " << rectangleperim << endl;

    // print values
    printvals(rectanglearea, rectangleperim, side1, side2);

    return 0;
}