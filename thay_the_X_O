#include <iostream>
#include <math.h>
#include <climits>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int r[]={0, -1, 0, 1}, c[] = {-1, 0, 1, 0};
int n, m, vs[105][105]={0};
char a[105][105];
void input () {
    cin >> n >> m;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> a[i][j];
}
bool check (int row, int col) {
    return (row >= 0 && row < m && col >= 0 && col < n && a[row][col] == 'O' && !vs[row][col]);
}
void dfs (int row, int col) {
    vs[row][col] = 1;
    for (int i=0; i<4; i++) {
        if (check(row+r[i], col+c[i])) {
            vs[row+r[i]][col+c[i]] = 1;
            dfs (row + r[i], col + c[i]);
        }
    }
}
void horizontal (int x) {
    for (int i=0; i<m; i++) 
        if (a[x][i] == 'O') {
            dfs (x, i);
        }
    
}
void vertical (int x) {
    for (int i=0; i<n; i++) 
        if (a[i][x] == 'O') 
            dfs (i, x);
}
void solve () {
    horizontal (0);
    if (n > 1)
    horizontal (n-1);
    vertical (0);
    if (m > 1)
    vertical (m-1);
}
void result () {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (vs[i][j]) cout << "O ";
            else cout << "X ";
        }
        cout << endl;
    }
    memset (vs, 0, sizeof(vs));
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        input();
        solve();
 //       cout << endl;
        result();
    }
    return 0;
}