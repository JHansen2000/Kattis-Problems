// Jacob Hansen - Mar 2023
// https://open.kattis.com/problems/classfieldtrip

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string list1, list2, output;
    cin >> list1 >> list2;
    output = list1 + list2;
    sort(output.begin(), output.end());
    cout << output << endl;
}