#include <iostream>
#include <string>
using namespace std;

int ex7() {

    // Initialise message:
    const string msg{"-times table:"};

    // Display all tables
    for (int n{2}; n<=10; ++n) {
        cout << n << msg << endl;

        // Display all multiplication for table n
        for (int m{1}; m<=10; ++m) {
            cout << "\t" << m << " * " << n << " = " << m*n << endl;
        }
        cout << endl;
    }

    return 0;
}