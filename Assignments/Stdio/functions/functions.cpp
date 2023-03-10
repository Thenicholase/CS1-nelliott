/*
Name: Nicholas Elliott

Functions 
*/

#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <cassert>

using namespace std;

template<class t1, class t2>
t1 addNums(t1 ,t2);

template<class t1, class t2>
t1 multiplyNums(t1, t2);

template<class t1, class t2>
t1 divideNums(t1, t2);

template<class t1, class t2>
t1 subtractNums(t1, t2);

template<class t1, class t2>
t1 remainderNums(t1, t2);

template<class t1, class t2>
t1 powerNums(t1, t2);

template<class t1>
t1 sqrtNums(t1);

void test();

int main(int argc, char *argv[]) {
    int n1, n2;
    int answer;
    int numb1, numb2;
    int answer2;
    int n3, n4;
    int answer3;
    int n5, n6;
    int answer4;
    int n7, n8, n9, n10, n11;
    int answer5, answer6, answer7;

    test();

    cout << "Please enter number 1: ";
    cin >> n1;
    cout << "Please enter number 2: ";
    cin >> n2;
    answer = addNums(n1, n2);
    cout << "The numbers added together is: " << answer << endl;

    cout << "Please enter a number to multiply: ";
    cin >> numb1;
    cout << "Please enter another number to multiply: ";
    cin >> numb2;
    answer2 = multiplyNums(numb1, numb2);
    cout << "The answer is: " << answer2 << endl;

    cout << "Please enter a number to divide: ";
    cin >> n3;
    cout << "Please enter another number to divide: ";
    cin >> n4;
    answer3 = divideNums(n3, n4);
    cout << "The answer is: " << answer3 << endl;

    cout << "Please enter a number to subtract from: ";
    cin >> n5;
    cout << "Please enter another number to subtract: ";
    cin >> n6;
    answer4 = subtractNums(n5, n6);
    cout << "The answer is: " << answer4 << endl;

    cout << "Please enter a number to divide: ";
    cin >> n7;
    cout << "Please enter another number to divide: ";
    cin >> n8;
    answer5 = remainderNums(n7, n8);
    cout << "The remainder of these numbers is: " << answer5 << endl;

    cout << "Please enter a number to be raised by an exponent: ";
    cin >> n9;
    cout << "Please enter a number for the exponent: ";
    cin >> n10;
    answer6 = powerNums(n9, n10);
    cout << "The answer is: " << answer6 << endl;

    cout << "Please enter a number to get the square root: ";
    cin >> n11;
    answer7 = sqrtNums(n11);
    cout << "The answer is: " << answer7 << endl;

    return 0;

}

template<class t1, class t2>
t1 addNums(t1 num1,t2 num2) {
    return num1 + num2;
}

template<class t1, class t2>
t1 multiplyNums(t1 num1, t2 num2) {
    return num1 * num2;
}

template<class t1, class t2>
t1 divideNums(t1 numb1, t2 numb2) {
    return numb1 / numb2;
}

template<class t1, class t2>
t1 subtractNums(t1 n1, t2 n2) {
    return n1 - n2;
}

template<class t1, class t2>
t1 remainderNums(t1 numb3, t2 numb4) {
    return numb3 % numb4;
}

template<class t1, class t2>
t1 powerNums(t1 n3, t2 n4) {
    return pow(n3, n4);
}

template<class t1>
t1 sqrtNums(t1 numb5) {
    return sqrt(numb5);
}

void test() {
    int result;
    result = addNums<int,int>(11, 15);
    assert(result == 26);
    result = addNums<int,int>(12, 1);
    assert(result == 13);

    result = multiplyNums<int, int>(10, 2);
    assert(result == 20);
    result = multiplyNums<int, int>(15, 10);
    assert(result == 150);

    result = divideNums<int, int>(20, 2);
    assert(result == 10);
    result = divideNums<int, int>(40, 10);
    assert(result == 4);

    result = subtractNums<int, int>(15, 12);
    assert(result == 3);
    result = subtractNums<int, int>(150, 20);
    assert(result == 130);

    result = remainderNums<int, int>(7, 4);
    assert(result == 3);
    result = remainderNums<int, int>(27, 9);
    assert(result == 0);

    result = powerNums<int, int>(2, 6);
    assert(result == 64);
    result = powerNums<int, int>(7, 3);
    assert(result == 343);

    result = sqrtNums<int>(49);
    assert(result == 7);
    result = sqrtNums<int>(121);
    assert(result == 11);

    cout << "All tests cases passed" << endl;
}