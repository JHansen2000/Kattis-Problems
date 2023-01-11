// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/tarifa

#include <iostream>
using namespace std;

int main() {
    int x, n, data_used = 0;
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        data_used += temp;
    }
    int data_remaining = ((x * n) - data_used) + x;
    cout << data_remaining << endl;
    return 0;
}