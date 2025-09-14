#include <iostream>
#include <string>
using namespace std; // this way you don't have to write std::string or std::cout for example

int io() {

    const string message1 {"Hi! This is a terminal message. What's your name? "};
    const string message2 {"Welcome, "};
    string name {};

    cout << message1; // Output message1 to the console
    cin >> name; // Read the user input and assign it to name
    cout << message2 << name << endl; // Output display message2, name and then a new line to the console

    return 0; // return 0 to indicate success
}