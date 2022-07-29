#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n;
    int x = 0;
    cin >> n;
    string currentString;
    for (int i = 0; i < n; i++) {
        cin >> currentString;
        x = (currentString.find("++") != string::npos) ? x + 1 : x - 1;
    }
    cout << x;
    return 0;
}