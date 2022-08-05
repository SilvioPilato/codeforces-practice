#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t = 0; 
    int n = 0; 
    int sleepH = 0; 
    int sleepM = 0;

    cin >> t;

    while (t--) {
        cin >> n >> sleepH >> sleepM;
        int h = 0; 
        int m = 0;
        int diffH;
        int diffM;
        int resH = 25;
        int resM = 61;

        while (n--) {

            cin >> h >> m;
            h+= (sleepH == h && sleepM > m) ? 24 : 0;
            h+= (sleepH > h) ? 24 : 0;
            int remainderH = (sleepM > m) ? 1 : 0;
            int remainderM = (sleepM > m) ? 60 : 0;
            diffH = h - sleepH - remainderH;
            diffM = m + remainderM - sleepM;
            if (diffH < resH) {
                resH = diffH;
                resM = diffM;
            }
            if (diffH == resH && diffM < resM) {
                resH = diffH;
                resM = diffM;
            }
        }
        cout << resH << " " << resM << '\n';
        
    }
    return 0;
}
