#include <iostream>
using namespace std;

int ex5() {

    // Same exercise as previous, but with I=[-10,-2]U]0,1]U[2,3[
    // Only allowed to use < and ==
    // => Omitting explanation

    double x {0.0};

    // Ask the user for input and assign it to x
    cout << "Enter a real number x: ";
    cin >> x;

    // Test if x is part of I=[-10,-2]U]0,1]U[2,3[
    if (

        ( ((x<3) && !(x<2)) || (x==2) ) ||
        ( ((x<1) && !(x<0) && !(x==0)) || (x==1) ) ||
        ( ((x< -2) && !(x< -10)) || (x==-2) || (x==-10))

        ) {
        cout << "x=" << x << " is part of I=[-10,-2]U]0,1]U[2,3[";
    } else {
        cout << "x=" << x << " is not part of I=[-10,-2]U]0,1]U[2,3[";
    }

    return 0;
}