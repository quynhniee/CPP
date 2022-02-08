/*
BCCOM - Số nén tối giản (Cơ bản)
https://www.spoj.com/PTIT/problems/BCCOM/
*/
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
ll test (ll n) {
    if (n < 10) return n;
    ll sum = 0;
    while (n != 0) {
        sum += n%10;
        n /= 10;
    }
    return test (sum);
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    ll n;
    while (t--) {
        cin >> n;
        cout << test (n) << endl;
    }
    return 0;
}