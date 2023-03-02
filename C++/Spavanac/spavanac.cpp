// Jacob Hansen - Mar 2023
// https://open.kattis.com/problems/spavanac

#include <iostream>

using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    if (m < 45) {
        h--;
        m = 60 - (45 - m);
    } else {
        m -= 45;
    }
    if (h < 0) h = 23;
    cout << h << " " << m << endl;
}