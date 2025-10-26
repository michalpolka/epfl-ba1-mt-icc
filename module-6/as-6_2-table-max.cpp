#include <iostream>
#include <vector>
using namespace std;

int somme_consecutifs_max (const vector<int>& input) {
    int maximum {0};
    int current {0};

    for (const int element : input) {
        if (element>0) current += element;
        if (current>maximum) maximum = current;
        if (element<=0) current = 0;
    }

    return maximum;
}

vector<size_t> lignes_max (const vector<vector<int>>& input) {
    vector<size_t> output;
    int maximum {0};
    const size_t size {input.size()};

    for (size_t i{0}; i<size; ++i) {
        const int currentSum {somme_consecutifs_max(input[i])};
        if (currentSum>maximum) {
            maximum = currentSum;
            output = {};
        };
        if (currentSum==maximum) output.push_back(i);
    }

    return output;
}

vector<vector<int>> tranches_max(const vector<vector<int>>& input) {
    vector<vector<int>> output;
    const vector<size_t> maxI {lignes_max(input)};

    for (const int element : maxI) {
        output.push_back(input[element]);
    }

    return output;
}


int as6_2() {

    const vector<vector<int>> m
        {
            {2, 1, 0, 2},
            {0, 1, 0, 3},
            {1, 3, 0, 0},
            {0, 2, 2, 0}
        };

    const vector<size_t> max {lignes_max(m)};

    for (const int element : max) cout << element << endl;

    cout << endl;

    const vector<vector<int>> out {tranches_max(m)};

    for (const vector<int>& i : out) for (const int j : i) cout << j << endl;

    return 0;
}