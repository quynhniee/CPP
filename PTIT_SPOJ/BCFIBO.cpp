
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
vector<ll> fibo;
void fibonacci () {
    fibo.push_back(0);
    fibo.push_back(1);
    for (int i = 2; i <= 1e6; i++)
        fibo.push_back((fibo[i-1] + fibo[i-2]) % mod);
}
void solution () {
    ll n;
    cin >> n;
    cout << fibo[n] << endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    fibonacci();
    solution();
    return 0;
}