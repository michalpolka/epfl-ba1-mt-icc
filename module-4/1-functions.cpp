#include <iostream>
using namespace std;

// Function prototypes
// => Tells the compiler that these functions exist and what type they return
int getUserInt(int min);
void printInt(int i);
void incrementInt(int& i);
int returnsSomething(int a);
int returnsSomething(int a, int b);


int functions() {

    // Basic calling of the function
    int userInt {getUserInt(3)};

    printInt(userInt);

    // Function that uses reference
    incrementInt(userInt);
    printInt(userInt);

    // Function calling another function in its input
    printInt(getUserInt(8));


    printInt(returnsSomething(2));
    printInt(returnsSomething(2,5));




    return 0;
}


// Function definitions

// Function that asks for input and checks it to be above or equal to x:
// Has a default value of 6 for min
int getUserInt(const int min=6) {

    int i {0};

    do {

        cout << "Please enter an integer bigger than or equal to " << min << ": " ;
        cin >> i;

    } while (i<min);

    return i;

}

// Function that prints to console (returns nothing)
void printInt(const int i) {
    cout << i << endl;
}

// Function that takes an int and increments it
void incrementInt(int& i) {
    ++i;
}

// Two functions can have the same name but be differentiated by the inputs:
int returnsSomething(const int a) {
    return a;
}

int returnsSomething(const int a, const int b) {
    return a+b;
}
