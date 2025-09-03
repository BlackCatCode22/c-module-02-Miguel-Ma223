// funWithFunctions.cpp
// mAM 9/3/25


#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>

using namespace std;

// Create three functions

// getAnIntFromTheUser()
// input: the user's name
// processing: ask the user for an integer value
// output: the user's inputed integer
int getAnIntFromTheUser(string userName) {
    // prompt the user for a number (a while number aka an int)
    int anIntFromTheUser;

    cout << "\n Hello, " + userName + ", please enter a whole number: ";
    cin >> anIntFromTheUser;

    return anIntFromTheUser;
}

int main () {
    cout << "\n...Welcome to my cool Fun With Functions Program!..\n";

    string userName;

    int aRandomNumber;

    cout << "\n Hello user, what is your name? ";
    cin >> userName;
    cout << "\n userName is: " << userName << "\n";

    aRandomNumber = getAnIntFromTheUser(userName);
    cout << "\n\n" + userName + " entered: " << aRandomNumber << endl;

    return 0;
}