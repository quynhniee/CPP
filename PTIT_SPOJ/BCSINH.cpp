
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
vector<int> a;
int n;
void output () {
    for (int i:a)
        cout << i;
    cout << endl;
}
void sinh (int k) {
    if (k==n)   output();
    else
        for (int i=0; i<=1; i++) {
            a[k] = i;
            sinh(k+1);
        }
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    a.resize(n, 0);
    sinh(0);
    a.clear();
    return 0;
}