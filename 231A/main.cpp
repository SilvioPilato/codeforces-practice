#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int lines;
    cin >> lines;
    string lineString;
    int t = 0;
    for(int line = 0; line <= lines; line++) {
        getline(cin, lineString);
        int c = std::count(lineString.begin(), lineString.end(), '1');
        if (c > 1) t++;
    }
    cout << t;
}