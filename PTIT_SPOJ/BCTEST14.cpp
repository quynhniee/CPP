
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
ll a, b, v;
void solution () {
    cin >> a >> b >> v;
    ll count = 1;
    v -= a;
    if (v > 0) {
        ll s = a - b;
        count += v / s;
        if (v % s != 0) count++;
    }
    cout << count << endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}