// Jacob Hansen - Jan 2023
// https://open.kattis.com/problems/planina

#include <iostream>
using namespace std;

int main() {
    int count = 4;
    long result;
    int iterations;
    cin >> iterations;
    for (int i = 1; i < iterations; i++) {
        if (count % 2 == 0) count = count + ((count / 2) - 1);
        else count = count + count - 1;
    }
    result = count * count;
    if (iterations == 1) result = 9; // Cheap solution
    cout << result << endl;
    return 0;
}