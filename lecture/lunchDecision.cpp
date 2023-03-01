/*
Name: Nicholas Elliott

Where should i eat lunch?
*/
#include <iostream>
#include <string>
#include <random>

using namespace std;

void promptname(string&)
void greetvictim(string);
void getinfo(int&, int&, int&);
string findfood(int, int, int)

int main() {
    string victimname;
    string wheretogo;
    int distance, price, temperature;

    srand(time(0));
    
    promptname(victimname);
    greetvictim(victimname);
    getinfo(distance, price, temperature);

    wheretogo = findfood(distance, price, temperature);

    if (wheretogo == "ERROR") {
        cout << "Something werid happened, get back ERROR with parameters: " << endl;
        cout << "distance: " << distance << endl;
        cout << "Price: " << price << endl;
        cout << "Temperature: " << temperature << endl;
        return 1;
    }

    cout << "You are going to....(Drumroll...............)" << endl << wheretogo << endl;

    return 0;
}

string findfood(int distance, int price, int temperature) {
    /*
    food map:
    0-1 = Taco bell
    1-5 = Texas Roadhouse
    5-20 = Hot tomato
    20+ = Casa Bonito

    < 1 = The Caf
    1-10 = Mcdonalds
    10-30 = Olive Garden
    30+ = Red Lobster

    < 30 = No where
    30-50 = Zoup
    50-100 = Coldstone
    100+ = No where
    */
   int randchoice = random()%3;
   switch(randchoice) {
    case 0:
    /*
        0-1 = Taco bell
    1-5 = Texas Roadhouse
    5-20 = Hot tomato
    20+ = Casa Bonito
    */
   if (distance < 1) 
    return "Taco Bell";
    else if (distance < 5) return "Texas Roadhouse";
   else if ( distance < 20) return "Hot Tomato";
   else return "Casa Bonito";
   break;

    case 1:
    /*
        < 1 = The Caf
    1-10 = Mcdonalds
    10-30 = Olive Garden
    30+ = Red Lobster
    */
   if (price < 1) {
        return "The Caf";
   } else if (price < 10) {
        return "Mcdonalds";
   } else if (price < 30) {
        return "Olive Garden";
   } else {
        return "Red Lobster";
   }
   break;

    case 2:
    /*
        < 30 = No where
    30-50 = Zoup
    50-100 = Coldstone
    100+ = No where
    */
   if (temperature < 30) return "No where";
   else if (temperature < 50) return "Zoup";
   else if (temperature > 100) return "Coldstone";
   else return "No where";

    default:
        cout << "We should never get here...";
        return "ERROR";
//    if (distance < 1 && price < 1 && temperature < 30) {
//     switch(randchoice) {
//         case 0:
//             return "Taco Bell";
//             break;
//         case 1:
//             return "The Caf";
//             break;
//         case 2:
//             return "No Where";
//             break;
//     
   }

void getinfo(int &distance, int &price, int &temperature) {
    cout << "How far do you want to travel? ";
    cin >> distance;

    cout << "How much do you want to spend? ";
    cin >> price;

    cout << "What is the temperature outside? ";
    cin >> temperature;
}

void promptname(string &name) {
    cout << "Please enter your full name: " << endl;
    getline(cin, name);
}

void greetvictim(string name) {
    cout << "Welcome " << name << " to our lunch picker..." << endl;
    cout << "be afraid...be very afraid..." << endl; 
}