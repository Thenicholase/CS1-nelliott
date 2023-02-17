/*
Name: Nicholas Elliott

Function and more functions
*/
#include <iostream>
#include <string>

using namespace std; 

// void sayHello() {
//     cout << "Hello from sayHello" << endl;
// }

// float addNums(int num1, int num2) {
//     float result;
//     result = num1 + num2 + 5.5;
//     return result;

// void greetUser(string firstname) {
   
//    cout << "Welcome " << firstname << " to my program." << endl;
// }

// string promptName() {
//     string firstname;

//     cout << "Please enter your first name: ";
//     cin >> firstname;

//     return firstname; 

// void printNum(int num1) {
//     int num2;
//     cout << "inside printNum num1: " <<  &num1  << endl;
//     cout << "inside printNum num2: " <<  &num2  << endl;
// }
// template <class t1>
// t1 addNums(t1 num1, t1 num2) {
//     t1 answer;
//     answer = num1 + num2;
//     return answer;
// }
// int addNums(int num1, int num2) {
//     return num1 + num2;
// }

// int addNums(float num1, float num2) {
//     return num1 + num2 + 10;
// }
void saygoodbye();
void sayhello();

void saygoodbye() {
    cout << "Goodbye Everyone" << endl;
}


void sayhello() {
    cout <<"Hello World" << endl;
    saygoodbye();
}

int main() {
    sayhello();
    // float n1;
    // int n2;
    // n1 = 42;
    // n2 = 15;

    // cout << n1 << " + " << n2 << " = " << addNums<float>(n1, n2) << endl;
    // int num1;
    // int num2;
    // num1 = 42;
    // cout << "inside main num1: " << &num1 << endl;
    // cout << "inside main num2: " << &num2 << endl;
    // printNum(num1);
    // string playerName;
    // playerName = promptName();
    // greetUser(playerName);
    
    // int num1, num2;
    // float addNumsAnswer;

    // cout << "Please enter two numbers seperated by a space: ";
    // cin >> num1 >> num2;

    // DOES NOT WORK!!! cout << "The result of sayHello is: " << sayHello() << endl;
    // addNumsAnswer = addNums(num1, num2);
    // cout << "The numbers added togther are: " << addNumsAnswer << endl;
    // sayHello();
    return 0;
}