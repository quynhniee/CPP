#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
void solve () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i:a) cin >> i;
    int Max = -1;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[j] > a[i])    Max = max (Max, a[j]-a[i]);
        }
    }
    cout << Max << endl;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
