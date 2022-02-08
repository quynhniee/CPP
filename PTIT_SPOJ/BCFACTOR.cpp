
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
void luyThua(ll &n, int i) {
    int cou = 0;
    while (n%i == 0) {
        cou++;
        n /= i;
    }
    if (cou > 0)
        cout << i << " " << cou << endl;
}
void solve () {
    ll n;
    cin >> n;
    int i = 3;
    if (n%2 == 0)
        luyThua(n, 2);
    while (i <= sqrt(n)) {
        luyThua(n, i);
        i += 2;
    }
    if (n != 1)
        cout << n << " 1\n";
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}