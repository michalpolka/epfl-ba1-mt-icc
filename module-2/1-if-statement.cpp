#include <iostream>
using namespace std;

int ifStatement() {

    // If statement

    int userInput {0};

    cout << "To test this if statement, input a number (hint: is your number nice?): ";
    cin >> userInput;

    // is userInput equal to 69?

    if ( userInput == 69 ) {
        cout << userInput << " is nice." << endl; // if yes, output this
    } else {
        cout << userInput << " is not nice." << endl; // if no, output this
    }

    return 0;

}