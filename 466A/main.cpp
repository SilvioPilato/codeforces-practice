// n -> times she need to commute
// m -> special ticket rides
// a -> ticket cost
// b -> special ticket cost
#include <iostream>
using namespace std;

int main() {
    int n,m,a,b; 
    cin >> n >> m >> a >> b;
    // if the special ticket is not worth, buy singles
    if (a * m <= b ) {
        cout << a * n;
        return 0;
    }

    int remaining = n;
    int totalCost = 0;
    while (remaining - m >= 0) {
        remaining -=m;
        totalCost+=b;
    }

    totalCost += (remaining * a < b) ? a * remaining : b; 
    cout << totalCost;
}