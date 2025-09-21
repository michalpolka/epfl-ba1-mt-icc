#include <iostream>
using namespace std;

int ex2() {

    constexpr int base {4};
    constexpr double cheese {800.0};
    constexpr double water {2.0};
    constexpr double garlic {2.0};
    constexpr double bread {400.0};
    int people {};

    cout << "How many people do you want to make fondue for?";
    cin >> people;
    cout << endl <<
        "Cheese: " << (cheese/base)*people << endl <<
        "Water: " << (water/base)*people << endl <<
        "Garlic: " << (garlic/base)*people << endl <<
        "Bread: " << (bread/base)*people << endl;
    return 0;
}