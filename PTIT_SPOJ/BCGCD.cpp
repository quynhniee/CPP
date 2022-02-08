
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
ll gcd (ll a, ll b) {
    return (b == 0) ? a : gcd (b, a%b);
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a, b;
    while (true)
    {
        cin >> a >> b;
        if (a < b)  swap(a, b);
        if (a == 0 && b == 0) break;
        else {
            ll uc = gcd(a, b);
            cout << uc << " " << a * (b / uc) << endl;
        }
    }
    
    return 0;
}