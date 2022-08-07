#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    map<int, int> found;
    cin >> t;
        
    while (t--) {
        int num = 0;
        int n = 0;
        int moves = 0;
        cin >> n;
        found.clear();
        for (int i = 0; i < n; i++) {
            cin >> num;
            if (found.find(num) != found.end()) {
                moves = max(found[num], moves);
            }
            found[num] = i + 1;
        }
        cout << moves << '\n';
    }

    return 0;
}