#include <iostream>
#include <string>
using namespace std;

bool canBeRotated(string s1, string s2) {
    if (s1.length() != s2.length()) return false;

    int n = s1.length();
    // Try all possible rotations
    for (int i = 0; i < n; i++) {
        string rotated = s1.substr(i) + s1.substr(0, i);
        if (rotated == s2) return true;
    }
    return false;
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (canBeRotated(s1, s2))
        cout << "Yes, the second string can be obtained by rotating the first." << endl;
    else
        cout << "No, the second string cannot be obtained by rotation." << endl;

    return 0;
}