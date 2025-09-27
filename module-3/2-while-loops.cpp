#include <iostream>
using namespace std;

int whileLoops() {

    // Var init
    int input {10}; // is initialised to 10 to illustrate the difference between while and do...while
    int iterations{0};

    // Ask for a whole number between 7 and 23 (incl)
    // DO{...}WHILE(...) will execute the code at least once
    do {
        cout << "Please enter a number between 7 and 23 (inclusive): ";
        cin >> input;
        if (input<7 || input>23) cout << "nuh uh that ain't between 7 and 23" << endl;
    } while ((input<7) || (input>23));

    // WHILE(...){...} will not necessarily execute the code inside if the condition isn't true

    while (input<20) {
        cout << "Your input is (it has been multiplied by 2 '" << iterations << "' times): " << input << endl;
        input *= 2;
        ++iterations;
    }

    cout << "Your input is (it has been multiplied by 2 '" << iterations << "' times): " << input << endl;




    return 0;
}