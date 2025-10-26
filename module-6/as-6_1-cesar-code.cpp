#include <iostream>
#include <string>
using namespace std;

char decale(const char c, const char start, int codeFactor) {
    while (codeFactor<0) codeFactor+=26;
    return start + (((c-start)+codeFactor)%26);
}

char code(const char input, const int codeFactor) {
    if (input>='a' && input<='z') return decale(input, 'a', codeFactor);
    if (input>='A' && input<='Z') return decale(input, 'A', codeFactor);
    return input;
}

string code(const string& input, const int codeFactor) {
    string output;
    const size_t size {input.size()};
    for (size_t i{0}; i<size; ++i) {
        output += code(input[i], codeFactor);
    }
    return output;
}

string decode(const string& input, const int codeFactor) {
    return code(input, -codeFactor);
}

int as6_1() {
    constexpr int cf{133};
    const string msg{"Hi! How are you? I'm not so well because I'm doing this assignment Sunday night and I want to shoot myself."};
    const string codedMsg{code(msg,cf)};

    cout << msg << endl;
    cout << codedMsg << endl;
    cout << decode(codedMsg,cf) << endl;


    return 0;
}