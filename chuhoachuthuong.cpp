#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        char x;
        cin >> x;
        if (x >= 'a' && x <= 'z')   x -= 32;
        else if (x >= 'A' && x <= 'Z')   x += 32;
        cout << x << endl;
    }
    return 0;
}