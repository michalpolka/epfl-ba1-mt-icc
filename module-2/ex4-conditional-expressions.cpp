#include <iostream>
using namespace std;

int ex4() {

    // Declare a double for the user input (init->0.0)
    double x {0.0};

    // Ask the user for input and assign it to x
    cout << "Enter a real number x: ";
    cin >> x;

    // Test if x is part of I=[-1,1[ (if x greater or equal to -1 AND if x smaller than 1
    if ( (x>=-1) && (x<1) ) {
        cout << "x=" << x << " is part of I=[-1,1[";
    } else {
        cout << "x=" << x << " is not part of I=[-1,1[";
    }


    return 0;
}