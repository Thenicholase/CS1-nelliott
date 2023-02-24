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

// template<class t1, class t2, class t3, class t4>
// void calcperim(t1&, t2&, t3&, t4&);

// template <class t1, class t2, class t3, class t4, class t5>
// void calcarea(t1&, t2&, t3&, t4&, t5&);

template<class t1, class t2, class t3>
void promptsides(t1&, t2&, t3&);

void printvals(double, double, double, double, double);

int main() {
    string name;
    double side1, side2, side3; //created variables
    // float triangleperim;
    // float step1;
    // float trianglearea;
    double triangleperim=0, trianglearea=0;

    name = promptname(); //promptname
    greetperson(name); //greet the person

    promptsides<double, double, double>(side1, side2, side3); //prompted for sides of trinagle

    // calcperim(side1, side2, side3, triangleperim);
    // calcarea<float, float, float, float, float>(side1, side2, side3, step1, trianglearea);

    // printvals(triangleperim, trianglearea, side1, side2, side3);
    triangleperim = side1 + side2 + side3; //calculated perimiter
    trianglearea = sqrt(((side1 + side2 + side3) / 2) * (((side1 + side2 + side3) / 2) - side1) * (((side1 + side2 + side3) / 2) - side2) * (((side1 + side2 + side3) / 2) - side3)); //calculated area

    cout << "The triangle has a perimiter of: " << triangleperim << endl; //output perimiter
    cout << "The triangle has an area of: " << trianglearea << endl; //output area

    printvals(triangleperim, trianglearea, side1, side2, side3); //printed values

    return 0;
}

    void printvals(double area, double perim, double s1, double s2, double s3) {
        printf("The triangle with the sides %f, %f, and %f has an area of %f and an perimiter of %f\n", s1, s2, s3, perim, area);
    }

    template<class t1, class t2, class t3, class t4>
    void calcperim(t1 &s1, t2 &s2, t3 &s3, t4 &perimiter) {
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
    