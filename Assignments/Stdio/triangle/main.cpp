/*
Name: Nicholas Elliott
Assignment: Triangle Area and Perimiter
Finding the area and perimiter of a triangle
*/

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

string promptname();
void greetperson(string);

void calcperim(float&, float&, float&, float&);

template <class t1, class t2, class t3, class t4, class t5>
void calcarea(t1&, t2&, t3&, t4&, t5&);

template<class t1, class t2, class t3>
void promptsides(t1&, t2&, t3&);

void printvals(float, float, float, float, float);

int main() {
    string name;
    float side1, side2, side3;
    float triangleperim;
    float step1;
    float trianglearea;

    name = promptname();
    greetperson(name);

    promptsides<float, float, float>(side1, side2, side3);

    calcperim(side1, side2, side3, triangleperim);
    calcarea<float, float, float, float, float>(side1, side2, side3, step1, trianglearea);

    printvals(triangleperim, trianglearea, side1, side2, side3);

    return 0;
}

    void printvals(float area, float perim, float s1, float s2, float s3) {
        printf("The triangle with the sides %f, %f, and %f has a perimiter of %f and an area of %f\n", s1, s2, s3, perim, area);
    }

    void calcperim(float &s1, float &s2, float &s3, float &perimiter) {
        perimiter = s1 + s2 + s3;
    }

    template <class t1, class t2, class t3, class t4, class t5>
    void calcarea(t1 &s1, t2 &s2, t3 &s3, t4 &step1, t5 &area) {
        area = sqrt(step1 * (s1 - step1) * (s2 - step1) * (s3 - step1));
        step1 = (s1 + s2 +s3) / 2;
    }

    template <class t1, class t2, class t3>
    void promptsides(t1 &side1, t2 &side2, t3 &side3) {
        cout <<"Please enter the three sides of a trinagle seperated by a space: ";
        cin >> side1 >> side2 >> side3;
    }

    void greetperson(string fullname) {
    cout << "Welcome " << fullname << " to my triangle calculator" << endl;
}

    string promptname() {
    string personName;

    cout << "Please enter your name: ";
    getline(cin, personName);

    return personName;
    }
    