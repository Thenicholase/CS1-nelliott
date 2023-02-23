/*
Name: Nicholas Elliott

Function Testing
*/
#include <iostream>
#include <cassert>

using namespace std;

int addnums(const int&, const int&);
void tests();

int main() {
    int n1, n2;
    int answer;
    n1 = 10;
    n2 = 20;

    answer = addnums(n1, n2);
    cout << "Our answer is: " << answer << endl;
    return 0;
}

void tests() {
    assert(addnums(42, 15) == 57);
    cout << "All test cases passed" << endl;
}

int addnums( const int &num1, const int &num2) {
    return num1 + num2;
}