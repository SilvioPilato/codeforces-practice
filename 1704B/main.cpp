#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long n = 0, x = 0, c = 0, a = 0,  b = 0;
        cin >> n >> x;
        long long minCurrent = LLONG_MAX;
        long long maxCurrent = LLONG_MIN;
        while (n--) {
            cin >> a;
            minCurrent = min(minCurrent, a);
            maxCurrent = max(maxCurrent, a);
            int vMin = a - minCurrent;
            int vMax = maxCurrent - a;
            if (vMin > x * 2 || vMax > x * 2) {
                c++;
                minCurrent = a;
                maxCurrent = a;
            }
        }
        cout << c << '\n';
    }
    return 0;
}