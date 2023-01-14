// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/shatteredcake

#include <iostream>
using namespace std;

int main() {
    int W, N, L;
    long sum = 0;
    cin >> W >> N;
    for (int i = 0; i < N; i++) {
        int w, l;
        cin >> w >> l;
        sum += w * l;
    }
    L = sum / W;
    cout << L << endl;
    return 0;
}