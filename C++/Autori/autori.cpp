// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/autori

#include <iostream>
using namespace std;

int main() {
    string input, output = "";
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (64 < input[i] && input[i] < 91) output += input[i];
    }
    cout << output << endl;
    return 0;
}