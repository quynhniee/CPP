/*
ALGOPRO8 - Đếm giày
https://www.spoj.com/PTIT/problems/ALGOPRO8/
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
int n, m;
void solution () {
    cin >> n >> m;
    cout << min(n, m) << " " << abs(n-m) / 2 << endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}