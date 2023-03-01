/*
Name: Nicholas Elliott

We go round and round...loops
*/
#include <iostream>

using namespace std;

int main() {
    // int i = 0;
    // int j = 10;
    // for (int i = 10; i > 0; i--) {
    //    int j = 0;
    //    j = j + 1;
    // for (int i = 0, j = 10 ; i < 10 && j > 0; i++, j--) {
    //    cout << i << "Hello World!" << endl;
    //    cout << j << "Goodbye World!" << endl;
        // cout << "j: " << j << endl;
        // cout << "i: " << i << endl;
    // }
    
    
    // for (int i = 0; i < 10; i++) {
    //     int k = 50;
    //     for (int j = 10; j > 0; j--) {
    //         int m = 100;
    //         cout << "i: " << i << "j: " << j << "k: " << "m: " << endl;
    //         k++;
    //         m++;
    //     }
    // }

    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        cout << "i: " << i << endl;
    }



    return 0;
}