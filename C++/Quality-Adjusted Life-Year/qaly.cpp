// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/qaly

#include <iostream>
using namespace std;

int main() {
    int periods;
    float qaly = 0;
    cin >> periods;
    for (int i = 0; i < periods; i++) {
        float q, y;
        cin >> q >> y;
        qaly += q * y;
    }
    cout << qaly << endl;
    return 0;
}