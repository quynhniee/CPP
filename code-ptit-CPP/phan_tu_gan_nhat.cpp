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
    int n, k, x;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    cin >> k >> x;
    if (x > a.back()) {
        for (int i = n - k/2; i < n; i++)   cout << a[i] << " ";
        for (int i = 0; i < k/2; i++)   cout << "0 ";
    }
    else {
        auto pos = find(a.begin(), a.end(), x) - a.begin();
        if (pos != n)
        for (int i = pos - k/2; i <= pos + k/2; i++)
            if (i != pos)   cout << a[i] << " ";
    }
    
    
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }

    return 0;
}

