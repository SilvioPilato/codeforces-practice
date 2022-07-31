#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n;
    int l;
    int current;
    vector<int> points;

    cin >> n >> l;

    for (int i = 0; i < n; i++) {
        cin >> current;
        points.push_back(current);
    }
    sort(points.begin(), points.end());

    int maxM = points.at(0) * 2;
    int m = 0;
    for(int i = 0; i < n - 1; i++) {
        m = points.at(i + 1) - points.at(i);
        maxM = (maxM < m) ? m : maxM;
    }

    m = l - points.back();
    maxM = (maxM < m * 2) ? m * 2 : maxM;

    cout <<fixed<< setprecision(9) << (double)maxM/2;
    return 0;
}