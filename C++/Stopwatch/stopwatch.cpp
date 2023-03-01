// Jacob Hansen - Mar 2023
// https://open.kattis.com/problems/stopwatch

#include <iostream>

using namespace std;

int main() {
    int num;
    int sum = 0;
    cin >> num;
    if (num % 2) {
        cout << "still running" << endl;
        return 0;
    }
    for (int i = 0; i < num; i++) {
        int temp;
        cin >> temp;
        if (i % 2) {
            sum += temp;
        } else {
            sum -= temp;
        }
    }
    cout << sum << endl;
}