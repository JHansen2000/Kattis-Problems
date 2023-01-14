// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/oddities

#include <iostream>
using namespace std;

int main() {
    int N, num;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        cout << num << " is " << (num % 2 == 0 ? "even" : "odd") << endl;
    }
    return 0;
}