#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
void solve () {
    int n;
    cin >> n;
    ll a[n+2], b[n+2];
    for (int i=0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    for (int i=1; i < n; i++) {
        for (int j=0; j < i; j++) {
            if (a[i] > a[j] && b[i] < a[i] + b[j])
                b[i] = a[i] + b[j];
        }
    }
    cout << *max_element(b, b+n) << endl;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}