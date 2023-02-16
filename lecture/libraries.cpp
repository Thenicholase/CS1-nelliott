/*
Name: Nicholas Elliott

Libraries
*/
#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {

    int num1, num2;

    cout << "Please enter 2 numbers seperated by a space: ";
    cin >> num1 >> num2;

    cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    // int num1, num2;

    // cout << "Please enter 2 numbers seperated by a space: ";
    // cin >> num1 >> num2;

    // cout << setw(10) << "Num1" << setw(5) << "Num2" << endl;
    // cout << setfill('-');
    // cout << setw(30) << "-" << endl;
    // cout << setfill(' ');
    // cout << setw(10) << num1 << setw(5) << num2 << endl;
    // char Somechar;

    // cout << "Please enter a number 0-127:" << endl;
    // cin >> Somechar;

    // cout << "You entered: " << char(toupper(Somechar)) << endl;

    // int num1;

    // cout<< "Please enter a whole number: ";
    // cin >> num1;

    // cout << "The square root of your number is: " << sqrt(num1) << endl;
    return 0;
}