#include <iostream>
#include <cmath>
using namespace std;

int ex8() {

    // Initialise variables
    constexpr double g {9.81}; // gravity

    double h {0.0}; // initial height
    double b {0.0}; // bounce coefficient
    int n {1}; // number of bounces

    // Ask for values
    do {
        cout << "Please enter a positive height h (decimal): ";
        cin >> h;
    } while (h<=0.0);

    do {
        cout << "Please enter a positive bounce coefficient b [0,1[: ";
        cin >> b;
    } while (b<0.0 || b>=1.0);

    do {
        cout << "Please enter a positive number of bounces n: ";
        cin >> n;
    } while (n<=0);

    // Calculate height
    for (int i{0}; i<n; ++i) {

        // cout << h << endl << b << endl << n << g << endl << endl; // Uncomment for debug

        const double speed1 {sqrt(2*h*g)}; // speed before bounce
        const double speed2 {b*speed1}; // speed after bounce
        h = speed2*speed2/(2*g); // new height

        // cout << speed1 << endl << speed2 << endl << h << endl << endl; // Uncomment for debug

    }

    //final message
    cout << "The ball will bounce up to " << h << "m after " << n << " bounces ";


    return 0;
}