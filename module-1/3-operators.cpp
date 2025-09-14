#include <iostream>
#include <cmath>
using namespace std;

int operators() {

    int a {1};
    constexpr double angle {3.14};

    a = a + 2; // One operator
    a += 2; // Another operator
    a = a % 2; // Yet another operator
    a = a + 2 + 3 / 5; // When you try to assign a decimal to an int, it just loses everything to the right of the decimal point
    ++a;

    cout << a << endl;
    cout << cos(angle) << endl; // using trig functions from cmath
    cout << sin(M_PI/2) << endl;



    return 0;
}