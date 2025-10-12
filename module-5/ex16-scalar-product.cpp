#include <iostream>
#include <vector>
using namespace std;

double dotProduct(const vector<double>& v1, const vector<double>& v2) {

    const size_t size {v1.size()};

    // check the sizes of v1,v2 (need to be equal for a dot product
    if (size != v2.size()) return 0.0;

    double output {0.0};

    for (int i{0}; i<size; ++i) {
        output += v1[i]*v2[i];
    }

    return output;
}

vector<vector<double>> askForInput(const int inputSize = 2) {

    constexpr int numberOfInputs {2};

    // create the ouput vector where the data is stored
    vector<vector<double>> output (numberOfInputs, vector<double>(inputSize));

    for (int i{0}; i<numberOfInputs; ++i) {

        cout << endl << "Please input the values for the vector v" << i << endl;

        for (int j{0}; j<inputSize; ++j) {

            cout << "-> Please input the value for the component v" << i << "_" << j << ": ";
            cin >> output[i][j];

        }
    }

    return output;
}

void printVector(const int identifier, const vector<double>& v) {

    cout << "Vector v" << identifier << ": { ";

    for (const double element : v) {
        cout << element << " ";
    }

    cout << "}" << endl;
}

int ex16() {

    int vectorSize {0};

    do {
        cout << "How big do you want your vectors to be? ";
        cin >> vectorSize;
    } while (vectorSize<1);

    cout << endl << "*****" << endl;

    const vector<vector<double>> inputVector {askForInput(vectorSize)};

    cout << endl;

    printVector(0, inputVector[0]);
    printVector(1, inputVector[1]);

    cout << endl << "*****" << endl << endl << "Dot Product Result: " << dotProduct(inputVector[0],inputVector[1]);




    return 0;
}

