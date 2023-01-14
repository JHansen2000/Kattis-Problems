// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/sibice

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, W, H;
    cin >> N >> W >> H;
    double max = sqrt(W * W + H * H);
    for (int i = 0; i < N; i++) {
        int length;
        cin >> length;
        cout << (length <= max ? "DA" : "NE") << endl;
    }
    return 0;
}