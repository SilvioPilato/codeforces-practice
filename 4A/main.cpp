#include <iostream>
using namespace std;
  
int main()
{
    int w;
    string yes= "YES";
    string no= "NO";
    string res = no;

    cin >> w;

    if (w % 2 != 0 || w <= 2) {
        cout << res;
        return 0;
    }

    if ((w - 2) % 2 == 0) {
        res = yes;
    }

    cout << res;
  
    return 0;
}