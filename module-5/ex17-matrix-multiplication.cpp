#include <iostream>
#include <vector>
using namespace std;

int askForInt(const char identifier) {

    int output {0};

    do {

        cout << "Please enter a value for " << identifier << ": ";
        cin >> output;

    } while (output<1);

    return output;
}

vector<vector<double>> askForInput() {

    // ask for size:
    const int m {askForInt('m')};
    const int n {askForInt('n')};

    // create the ouput vector where the data is stored
    vector<vector<double>> output (m, vector<double>(n));

    for (int i{0}; i<m; ++i) {

        cout << endl << "Please input the values for line " << i << "." << endl;

        for (int j{0}; j<n; ++j) {

            cout << "-> Please input the value for the component " << i << "_" << j << ": ";
            cin >> output[i][j];

        }

    }

    cout << endl << "*****" << endl << endl;

    return output;
}

void printMatrix(const char identifier, const vector<vector<double>>& m) {

    cout << "Matrix " << identifier << ":" << endl << "{" << endl;

    for (const vector<double>& line : m) {

        cout << "| ";

        for (const double element : line) {
            cout << element << " ";
        }

        cout << endl;

    }

    cout << "}" << endl;
}

vector<vector<double>> matrixMultiplication(const vector<vector<double>>& matrix0, const vector<vector<double>>& matrix1) {

    // vectors to store the size of the inputs
    const vector<size_t> size0 {matrix0.size(), matrix0[0].size()};
    const vector<size_t> size1 {matrix1.size(), matrix1[0].size()};

    // check if the inputs are of the right size
    if (size0[1]!=size1[0]) return {{0.0}};

    // initialise the output matrix
    vector<vector<double>> output (size0[0], vector<double>(size1[1]));

    // loop through all the rows
    for (int i{0}; i<size0[0]; ++i) {

        // loop through all the columns
        for (int j{0}; j<size1[1]; ++j) {

            double temp {0.0};

            for (int k{0}; k<size0[1]; ++k) {
                temp += matrix0[i][k]*matrix1[k][j];
            }

            output[i][j] = temp;

        }

    }


    // return!
    return output;

}

int ex17() {

    cout << endl;

    cout << "Please enter values for the first matrix: " << endl;
    const vector<vector<double>> matrix0 {askForInput()};
    cout << "Please enter values for the second matrix: " << endl;
    const vector<vector<double>> matrix1 {askForInput()};

    printMatrix('0', matrix0);
    cout << endl;
    printMatrix('1', matrix1);

    cout << endl << "*****" << endl << endl;

    cout << "Result: " << endl << endl;
    printMatrix('r', matrixMultiplication(matrix0,matrix1));


    return 0;
}