#include <iostream>
#include <vector>
#include <array>
using namespace std;

int tables() {

    // Let's initialise a dynamic table with 2 elements:
    vector<int> dynTable {{1,8}};

    // Which is different from a dynamic table with 2 slots for elements:
    vector<int> dynTable2 {2};

    // Which is different from a dynamic table with 3 identical elements of value 5:
    vector<int> dynTable3 {3,5};

    // You can initialise a table to another table:
    vector<int> dynTable4 {dynTable};

    // Which is different from a STATIC table with 2 slots for elements:
    // vector<int, 2> statTable {{2,1}};


    // Let's get an element from a table:
    cout << dynTable4[1] << endl;


    // for loop with reference in a table (goes over elements in the table):
    for (int& input : dynTable3) {
        cout << input++;
    }
    cout << endl << dynTable3[0] << dynTable3[1] << endl;

    // for loop that goes over elements WITH A CERTAIN INDEX:
    // uses the .size() method
    // size_t is a "special int"
    for (size_t i{0}; i < dynTable3.size(); ++i) {
        cout << "Element " << i << ": " << dynTable3[i] << endl;
    }

    // Output first then last element of a table
    vector<int> bigTable {{3,5,2,3,35,12,35,23,67}};
    cout << bigTable.front() << bigTable.back() << endl;

    // Remove the last element
    bigTable.pop_back();
    cout << bigTable.back() << endl;

    // Add another element at the end
    bigTable.push_back(32);
    cout << bigTable.back() << endl;

    // Is a table empty?
    cout << dynTable4.empty() << endl;

    vector<int> emptyTable {};
    cout << emptyTable.empty() << endl;


    // Matrix (multi-dimensional table)
    vector<vector<int>> table2D {5, vector<int>{6}};
    // This is a 5x6 matrix

    table2D[1][4] = 5;
    cout << table2D[1][4] << endl;

    // Yet another one which is initialised to some values:
    vector<vector<int>> table2D2 {
        {
            { 3, 4, 5},
            { 2, 5, 1, 2, 45}
        }};


    // Arrays
    // Array sizes are fixed upon initialisation
    const size_t threeDimensions {3};
    array<int, threeDimensions> vector3D {};

    cout << vector3D[1] << endl;
    vector3D[1] = 3;
    cout << vector3D[1] << endl;

    // With arrays, when initialising to values with a 2D table:

    array<array<int, threeDimensions>, threeDimensions> anotherArray {{
        4, 3, 4,
        2, 3, 4,
        7, 4, 3
    }};

    // Arrays also have .size() method


    return 0;
}