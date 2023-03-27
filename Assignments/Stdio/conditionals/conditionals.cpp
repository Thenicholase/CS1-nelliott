/*
Name: Nicholas Elliott

Conditionals
*/
#include <iomanip>
#include <string>
#include <cmath>
#include <iostream>
#include <cassert>

using namespace std;

template<class t1, class t2, class t3, class t4, class t5>
t1 addNums(t1, t2, t3, t4, t5);

template<class t1, class t2, class t3, class t4, class t5>
t1 multiplyNums(t1, t2, t3, t4, t5);

template<class t1, class t2, class t3, class t4, class t5>
t1 avgNums(t1, t2, t3, t4, t5);

template<class t1, class t2, class t3, class t4, class t5>
t1 largeNums(t1, t2, t3, t4, t5);

template<class t1, class t2, class t3, class t4, class t5>
t1 smallNums(t1, t2, t3, t4, t5);

void test();

int main () {
    int num1, num2, num3, num4, num5;
    char letter;
    string firstname;
    cout <<"Hello, please enter your name: ";
    cin >> firstname;
    cout << "Hello " << firstname << ", please enter five numbers seperated by a space: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    cout << "A. Add Numbers" << endl;
    cout << "B. Multiply Numbers" << endl;
    cout << "C. Numbers Average" << endl;
    cout << "D. Biggest Number" << endl;
    cout << "E. Smallest Number" << endl;
    cout << "Please enter a selection: ";
    cin >> letter;

    switch(letter) {
        case 'A':
        cout << "These numbers added are: ";
        cout << addNums(num1, num2, num3, num4, num5) << endl;
        break;

        case 'B':
        cout << "These Numbers Multiplied are: ";
        cout << multiplyNums(num1, num2, num3, num4, num5) << endl;
        break;

        case 'C':
        cout << "The Average of these numbers is: ";
        cout << avgNums(num1, num2, num3, num4, num5) << endl;
        break;

        case 'D':
        cout << "The largest number is: ";
        cout << largeNums(num1, num2, num3, num4, num5) << endl;
        break;

        case 'E':
        cout << "The smallest number is: ";
        cout << smallNums(num1, num2, num3, num4, num5) << endl;
        break;
    }
    return 0;
}

template<class t1, class t2, class t3, class t4, class t5>
t1 addNums(t1 n1, t2 n2, t3 n3, t4 n4, t5 n5) {
    return n1 + n2 + n3 + n4 + n5;
}

template<class t1, class t2, class t3, class t4, class t5>
t1 multiplyNums(t1 n1, t2 n2, t3 n3, t4 n4, t5 n5) {
    return n1 * n2 * n3 * n4 * n5;
}

template<class t1, class t2, class t3, class t4, class t5>
t1 avgNums(t1 n1, t2 n2, t3 n3, t4 n4, t5 n5) {
    return addNums(n1, n2, n3, n4, n5)/5; 
}

template<class t1, class t2, class t3, class t4, class t5>
t1 largeNums(t1 n1, t2 n2, t3 n3, t4 n4, t5 n5) {
    if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5) {
        return n1;
} else if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5) {
    return n2;
} else if(n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5) {
    return n3;
} else if(n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5) {
    return n4;
} else {
    return n5;
}}

template<class t1, class t2, class t3, class t4, class t5>
t1 smallNums(t1 n1, t2 n2, t3 n3, t4 n4, t5 n5) {
        if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5) {
        return n1;
} else if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5) {
    return n2;
} else if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5) {
    return n3;
} else if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5) {
    return n4;
} else {
    return n5;
}}

void test() {
    int answer = addNums(10, 15, 5, 20, 1);
    int expected = 51;
    assert(answer == expected);
    assert(addNums(10, 20, 30, 40, 50) == 150);
    assert(addNums(1, 2, 3, 4, 5) == 15);

    assert(multiplyNums(1, 2, 3, 4, 5) == 120);
    assert(multiplyNums(2, 4, 6, 8, 10) == 3840);
    assert(multiplyNums(3, 5, 7, 9, 11) == 10395);

    assert(avgNums(5, 10, 15, 20, 25) == 15);
    assert(avgNums(2, 4, 6, 8, 10) == 6);
    assert(avgNums(10, 20, 30, 40, 50) == 30);

    assert(largeNums(45, 22, 31, 11, 25) == 45);
    assert(largeNums(64, 24, 79, 11, 1) == 79);
    assert(largeNums(150, 231, 20, 123, 215) == 231);

    assert(smallNums(11, 25, 48, 62, 12) == 11);
    assert(smallNums(1, 59, 67, 85, 41) == 1);
    assert(smallNums(84, 64, 23, 54, 120) == 23);

    printf("%s\n", "all test cases passed...");
}

