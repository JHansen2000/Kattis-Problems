// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/metronome

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float input, output;
    cin >> input;
    output = input / 4.0;
    cout << fixed;
    cout << setprecision(2);
    cout << output;
}