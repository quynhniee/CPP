#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
vector<int> a;
int n, cou;

void init () {
    cin >> n;
    a.resize(n);
    for (auto &i : a)   cin >> i;
    cou = 0;
}
void solve () {
    for (int i = 0; i < n-1; i++) {
        int pos = i;
        for (int j = i + 1; j < n; j++) 
            if (a[pos] > a[j])
                    pos = j;
        if (pos != i)   {
            swap(a[i], a[pos]);
            ++cou;
        }
    }
    cout << cou << endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        init ();
        solve();
    }
    return 0;
}