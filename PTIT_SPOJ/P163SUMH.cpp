/*
P163SUMH - ROUND 3H - Xúc xắc
https://www.spoj.com/PTIT/problems/P163SUMH/
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
int a, b;
void solution () {
    cin >> a >> b;
    int x1 = 0, x2 = 0, x3 = 0;
    for (int i = 1; i <= 6; i++) {
        int ti = abs(i - a), teo = abs(i - b);
        if (ti == teo)  x2++;
        else if (ti < teo)  x1++;
        else    x3++;
    }
    cout << x1 << " " << x2 << " " << x3 << endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}