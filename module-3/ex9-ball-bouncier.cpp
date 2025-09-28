#include <iostream>
#include <cmath>
using namespace std;

int ex9() {

    // Initialise variables
    constexpr double g {9.81}; // gravity

    double h {0.0}; // initial height
    double hf {0.0}; // final height
    double b {0.0}; // bounce coefficient
    int n {0}; //how many bounces

    // Ask for values
    do {
        cout << "Please enter a positive initial height h0 (decimal): ";
        cin >> h;
    } while (h<=0.0);

    do {
        cout << "Please enter a positive bounce coefficient b [0,1[: ";
        cin >> b;
    } while (b<0.0 || b>=1.0);

    do {
        cout << "Please enter a positive final height h (decimal): ";
        cin >> hf;
    } while (hf<=0);

    // Calculate height
    do {

        // cout << h << endl << b << endl << n << g << endl << endl; // Uncomment for debug

        const double speed1 {sqrt(2*h*g)}; // speed before bounce
        const double speed2 {b*speed1}; // speed after bounce
        h = speed2*speed2/(2*g); // new height
        ++n;

        // cout << speed1 << endl << speed2 << endl << h << endl << endl; // Uncomment for debug

    } while (h>hf);

    //final message
    cout << "The ball's bounce will be below " << hf << "m after " << n << " bounces ";


    return 0;
}