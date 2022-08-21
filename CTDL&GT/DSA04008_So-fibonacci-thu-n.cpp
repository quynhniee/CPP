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
#define matrix vector<vector<ll> >

matrix matrix_multiply (matrix a, matrix b) {
    matrix c(2, vector<ll>(2, 0));
    FOR (i, 0, 1)
        FOR (j, 0, 1)
            FOR (k, 0, 1) {
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= mod;
            }
    return c;
}

ll n;
matrix fibo = {{1, 1}, {1, 0}};

matrix identity_matrix = {{1, 0}, {0, 1}};
matrix exponential (ll k) {
    if (k == 0) return identity_matrix;
    matrix x = exponential(k/2);
    matrix temp = matrix_multiply(x, x);
    if (k%2 == 0)   return temp;
    else     return matrix_multiply(fibo, temp);
}
void test () {
    cin >> n;
    matrix res = exponential(n);
    cout << res[1][0] << endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    tester()    test();
    return 0;
}