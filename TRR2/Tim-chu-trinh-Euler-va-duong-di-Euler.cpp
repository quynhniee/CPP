#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <utility>
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define tester()    int t; cin >> t; while (t--)
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
vector<vector<int> > a;
// đồ thị vô hướng
int n, S;
void init () {
    cin >> n >> S;
    a.assign(n+1, vector<int> (n+1, 0));
    FOR (i, 1, n)
        FOR (j, 1, n)
            cin >> a[i][j];
}
void euler (int u) {
    stack<int> st, ce;
    st.push(u);
    while (!st.empty()) {
        int s = st.top(), isEmpty = 1;
        FOR (t, 1, n)
            if (a[s][t]) {
                st.push(t);
                a[s][t] = a[t][s] = 0; // xóa cạnh (s, t) của đồ thị vô hướng
                isEmpty = 0;
                break;
            }
        if (isEmpty) {
            ce.push(s);
            st.pop();
        }
    }
    while (!ce.empty()) {
        cout << ce.top() << " ";
        ce.pop();
    }
}
void solution () {
    init();
    euler(S);
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}