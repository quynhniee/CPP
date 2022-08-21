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
#define tester()    int t; cin >> t; while (t--)
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int a, b; 
vector<ll> dp (1e6 + 5, 0);
void sieve () {
    for (int i = 1; i <= 1e6; i++)
        for (int j = i*2; j <= 1e6; j += i)
            dp[j] += i;
}
void solution () {
    cin >> a >> b;
    ll cou = 0;
    FOR (i, a, b)
        if (dp[i] > i)  ++cou; 
    cout << cou << endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    solution();
    return 0;
}