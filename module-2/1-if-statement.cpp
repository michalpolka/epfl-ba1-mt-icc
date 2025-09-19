#include <iostream>
using namespace std;

int main() {

    // If statement

    int userInput {0};

    cout << "To test this if statement, input a number (hint: is your number nice?): ";
    cin >> userInput;

    // is userInput equal to 69 OR ( || ) equal to 420?

    if ( userInput == 69 || userInput == 420 ) {
        cout << userInput << " is nice." << endl; // if yes, output this
    } else {
        cout << userInput << " is not nice." << endl; // if no, output this
    }




}