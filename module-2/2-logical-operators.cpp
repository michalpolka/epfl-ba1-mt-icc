#include <iostream>
using namespace std;

int ifStatement() {

    // If statement

    int userInput {0};
    constexpr bool runOrNot {false};

    cout << "To test this if statement, input a number (hint: is your number nice?): ";
    cin >> userInput;

    // is userInput equal to 69 OR 69 AND is runOrNot not true?

    if ( (userInput == 69 || userInput == 420) && ( !runOrNot ) ) {
        cout << userInput << " is nice. Also, this ran." << endl; // if yes, output this
    } else {
        cout << userInput << " is not nice. Also, this ran." << endl; // if no, output this
    }

    return 0;

}