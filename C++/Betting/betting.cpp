// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/betting

#include <iostream>
using namespace std;

int main() {
    double input, output1, output2;
    cin >> input;
    output1 = 100.0 / input;
    output2 = 100.0 / (100.0 - input);
    cout << output1 << endl << output2 << endl;
    return 0;
}