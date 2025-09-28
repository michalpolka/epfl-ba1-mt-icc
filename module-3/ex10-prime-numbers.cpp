#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

    // Output message
    const string msg {" is not a prime number. It is divisible by "};

    // Get the input integer
    int input {0};
    do {
        cout << "Please enter a positive integer: ";
        cin >> input;
    } while (input<=0);

    // Is input == 2?
    if (input == 2) {
        cout << "2 is a prime number." << endl;
        return 0;
    }

    // Is input | 2?
    if (input%2 == 0) {
        cout << input << msg << "2" << endl;
    }

    // Get the maximum divider we test for, and make it an int
    int maxDivider {0};
    maxDivider = floor(sqrt(input));

    // Test for primeness
    for (int i{3}; i<maxDivider; i+=2) {
        if (input % i == 0) {
            cout << input << msg << i << endl;
            return 0;
        }
    }

    // It's a prime!
    cout << input << " is a prime number." << endl;

    return 0;
}