// Jacob Hansen - Mar 2023
// https://open.kattis.com/problems/blueberrywaffle

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double speed, seconds, degrees;
    int rotations;
    cin >> speed >> seconds;
    degrees = (180.0 / speed) * seconds;
    double remaining = fmod(degrees, 180.0);
    rotations = (degrees - remaining) / 180.0;
    if (remaining > 90) rotations++;
    if (rotations % 2) {
        cout << "down" << endl;
    } else {
        cout << "up" << endl;
    }
}