#include <iostream>
using namespace std;

int main() {
    int n;
    int k;
    int score;
    int passed = 0;

    cin >> n >> k;
    int scoreToBeat = 0;
    int current = 0;
    for (int i = 0; i < n; i++) {
        cin >> current;
        if (i == k - 1) scoreToBeat = current;
        if (scoreToBeat > current) break;
        if (current > 0) passed++;
    }
    cout << passed;
    return 0;
}