#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int t;
    int ln, lm;
    int diff;
    string a;
    string b;
    cin >> t;
 
    for (int i=0; i<t; i++) {
        cin >> ln >> lm;
        cin >> a >> b;
        int ldiff = ln - lm;
        string subA1 = a.substr(ldiff);
        string subB1 = b.substr(1);

        if (b == subA1) {
            cout << "YES" << '\n';
            continue;
        }

        if(subB1 != subA1.substr(1)) {
            cout << "NO" << '\n';
            continue;
        }

        char initB = b.front();
        string subA2 = a.substr(0, ldiff);
        if (subA2.find(initB) == string::npos) {
            cout << "NO" << '\n';
            continue;
        }

        cout << "YES" << '\n';
    }
    return 0;
}