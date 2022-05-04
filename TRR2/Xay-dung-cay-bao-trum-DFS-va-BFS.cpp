#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <iomanip>
#include <utility>
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define tester()    int t; cin >> t; while (t--)
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
vector<bool> vs;
vector<vector<int> > a;
int n, start;
void init () {
    cin >> n >> start;
    a.assign(n+2, vector<int> (n+2, 0));
    FOR (i, 1, n)
        FOR (j, 1, n) 
            cin >> a[i][j];
}
void DFS (int u) {
    cout << "DFS tree\n";
    vs.assign(n+2, false);
    stack<int> st;
    st.push(u);
    vs[u] = true;
    while (!st.empty()) {
        int s = st.top(); st.pop();
        FOR (t, 1, n) 
            if (a[s][t] and !vs[t]) {
                st.push(s), st.push(t);
                vs[t] = true;
                (s < t) ? cout << s << " " << t << endl : cout << t << " " << s << endl;
                break;
            }
    }
}
void BFS (int u) {
    cout << "BFS tree\n";
    vs.assign(n+2, false);
    queue<int> q;
    q.push(u);
    vs[u] = true;
    while (!q.empty()) {
        int s = q.front(); q.pop();
        FOR (t, 1, n) 
            if (a[s][t] and !vs[t]) {
                vs[t] = true;
                q.push(t);
                (s < t) ? cout << s << " " << t << endl : cout << t << " " << s << endl;
            }
    }
}
void solution () {
    init();
    DFS (start);
    BFS (start);
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}