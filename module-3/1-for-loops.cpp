#include <iostream>
using namespace std;

int forLoops() {

    // Initialise variables
    int x{0};
    int y{1};

    // Ask for a small and large number:
    cout << "Please enter a number x: ";
    cin >> x;

    cout << "Please enter a number y (y>x): ";
    cin >> y;

    // Show all numbers between x,y:
    for (int i{x}; i<=y ;++i) {
        cout << i << endl;
    }


    return 0;
}