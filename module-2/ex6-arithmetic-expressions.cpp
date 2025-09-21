#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ex6() {

    // Initialise a double to store the user input
    double x {0.0};

    // Get x from user input
    cout << "Please input a real number x: ";
    cin >> x;

    // Create output messages
    const string notDefined {"The following expression ID is not defined: "};


    // Expression 1
    if (x!=0) {
        cout << (x/(1-exp(x))) << endl;
    } else {
        cout << notDefined << "1" << endl;
    }

    // Expression 2
    if (x>0 && x!=1) {
        cout << (x*log(x)*exp(2/(x-1))) << endl;
    } else {
        cout << notDefined << "2" << endl;
    }

    // Expression 3
    if (x!=2 && !(x<8 && x>0)) {
        cout << ((-x-sqrt(x*x-8*x))/(2-x)) << endl;
    } else {
        cout << notDefined << "3" << endl;
    }

    // Expression 4
    if (x!=0 && (sin(x)-(x/20))>=0 && (x*x-1/x)>0 ) {
        cout << (sqrt((sin(x)-(x/20))*log(x*x-1/x))) << endl;
    } else {
        cout << notDefined << "4" << endl;
    }



    return 0;
}