#include <iostream>
using namespace std;

int main() {

    // This will be usable everywhere in the main() function:
    int i {0};

    if (i==0) {
        // This will be usable everywhere in the if block:
        int j {1};
    }

    // This doesn't work because j is only usable in the if block:
    cout << i << ", " << j;


    return 0;
}