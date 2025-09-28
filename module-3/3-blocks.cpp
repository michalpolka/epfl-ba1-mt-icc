#include <iostream>
using namespace std;

int blocks() {

    // This will be usable everywhere in the main() function:
    int i {0};

    if (i==0) {
        // This will be usable everywhere in the if block:
        int j {1};
    }

    // This doesn't work because j is only usable in the if block:
    cout << i << ", " << j;

    // So this doesn't compile.
    // As a general rule, try to avoid global variables
    // -> restrict their "scope" (= where they can be used) as much as possible


    return 0;
}