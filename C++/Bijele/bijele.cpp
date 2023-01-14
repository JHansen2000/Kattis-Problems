// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/bijele

#include <iostream>
using namespace std;

int main() {
    int standard[6] = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; i++) {
        int temp1, temp2;
        cin >> temp1;
        temp2 = standard[i] - temp1;
        cout << temp2 << " ";
    }
    return 0;
}