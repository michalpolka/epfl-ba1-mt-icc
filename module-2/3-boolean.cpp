#include <iostream>
using namespace std;

int boolean() {

    // get the inputs

    int userInput {0};

    cout << "This code will return true (1) if the following int is above 21: ";
    cin >> userInput;

    // is userInput above 21?
    const bool above21 { (userInput > 21) };

    cout << above21;

    return 0;

}