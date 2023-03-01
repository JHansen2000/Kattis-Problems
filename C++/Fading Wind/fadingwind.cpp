// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/fadingwind

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int h, k, v, s; // starting height, fixed factor, starting velocity, wind strength 
    int d = 0; // horizontal distance traveled
    cin >> h >> k >> v >> s;
    while (h > 0) {
        v += s;
        v -= max(1, v/10);
        if (v >= k) h++;
        if ((0 < v) && (v < k)) {
            h--;
            if (h == 0) {
                v = 0;
            }
        }
        if (v <= 0) {
            h = 0;
            v = 0;
        }
        d += v;
        if (s > 0) s--;
    }
    cout << d << endl;
}