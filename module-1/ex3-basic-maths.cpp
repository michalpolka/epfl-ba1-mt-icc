#include <iostream>
using namespace std;

int basicMaths() {

    int x{}, y{}; // change these around to make them int or double
    double a{}, b{}, c{}, d{};

    x = 2;
    y = 4;

    a = x+y;
    b = x-y;
    c = x*y;
    d = x/y;

    cout <<
        "a=" << a << endl <<
        "b=" << b << endl <<
        "c=" << c << endl <<
        "d=" << d << endl;

    return 0;
}