/*
Name: Nicholas Elliott

Solving Apaxiaaans
*/

// Algorithm
// 1. create main function
// 2. declare variables string ApaxiaanName, string compactName, and int nameLength.
// 3. output prompt asking for Apaxiaan name.
// 4. allow for Apaxiaan name input
// 5. set namelength = to the length of string ApaxiaanName using .length to read value
// 6. create for loop to using increments compacting name until there are no more repeating letters
// 7. ouput compacted name



#include <iostream>
#include <string>
#include <cassert>


using namespace std;

void kattis();
void tests();
string solver(string);

int main(int argc, char **argv) {

    kattis();

    return 0;
}

string solver(string apaxiaaanname) {
    int nameLength;
    nameLength=apaxiaaanname.length();
    string compactname(1, apaxiaaanname[0]);
    for(int i=1; i<nameLength; i++){
        if(apaxiaaanname[i] != apaxiaaanname[i-1]) {
            compactname += apaxiaaanname[i];
            return compactname;
        }
    }
    return "";
}


void kattis() {
    string apaxiaaanname;
    int namelength;
    namelength=apaxiaaanname.length();

    cout << "Please enter your apaxiaaan name: ";
    getline(cin,apaxiaaanname);

    for(int i=0; i<namelength; i++) {
    cout << apaxiaaanname << " translates to: " << solver(apaxiaaanname); 
    }

 }

void tests() {
    assert(solver("aaaaaaaaaappppppppllleeeeeeeeeees") == "apples");

}