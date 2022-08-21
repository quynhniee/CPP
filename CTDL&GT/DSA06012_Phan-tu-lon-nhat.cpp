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
int n, k;
void test () {
    cin >> n >> k;
    a.resize(n);
    for (auto &i : a)   cin >> i;
    sort(a.begin(), a.end());
    for (int i = 1; i <= k; i++) 
        cout << a[n - i] << " ";
    cout << endl;
    a.clear();
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)\
        test();
    return 0;
}