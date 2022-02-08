
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
vector<int> a, vs;
int n;
void init () {
    vs.resize(n, 0);
    for (int i=1; i<=n; i++)
        a.push_back(i);
}
void output () {
    for (auto i:a)
        cout << i;
    cout << endl;
}
void nextPermu (int k) {
    if (k==n)   output();
    else {
        for (int i=1; i<=n; i++) {
            if (!vs[i]) {
                vs[i] = 1;
                a[k] = i;
                nextPermu(k+1);
                vs[i] = 0;
            }
        }
    }
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    init();
    nextPermu(0);
    return 0;
}