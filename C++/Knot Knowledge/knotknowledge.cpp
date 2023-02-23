// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/knotknowledge

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int todo[n], done[n-1];
    for (int i = 0; i < n; i++) {
        int knot;
        cin >> knot;
        todo[i] = knot;
    }
    for (int i = 0; i < n - 1; i++) {
        int knot;
        cin >> knot;
        done[i] = knot;
    }
    for (int i = 0; i < n; i++) {
        int knot = todo[i];
        bool found = false;
        for (int j = 0; j < n - 1; j++) {
            if (knot == done[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << knot << endl;
            break;
        }
    }
    return 0;
}