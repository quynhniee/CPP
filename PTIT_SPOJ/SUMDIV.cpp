
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
void solution () {
    ll n, sum = 0;
    cin >> n;
    ll m = sqrt(n);
    for (ll i=1; i<=m; i++) 
        if (n%i == 0)   sum += i + n/i;
    if (m*m == n)   sum -= m;
    cout << sum << endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}