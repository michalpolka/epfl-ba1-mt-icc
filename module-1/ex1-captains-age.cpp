#include <iostream>
using namespace std;

int captainsAge() {

    constexpr int currentYear {2025};
    int age {};
    int birthYear {};

    cout << "How old are you? ";
    cin >> age;

    birthYear = currentYear - age;

    cout << "You were born in " << birthYear << " (±1 year)" << endl;

    return 0;
}