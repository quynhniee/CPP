#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <utility>
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define tester()    int t; cin >> t; while (t--)
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int n, res;
vector<vector<int> > e;
vector<bool> vs;
void init () {
    cin >> n;
    e.clear(); e.resize(n + 2);
    int x;
    FOR (i, 1, n)
        FOR (j, 1, n) {
            cin >> x;
            if (x)    e[i].push_back(j);
        }
    vs.assign(n+2, false);
}
void BFS (int s) {
    queue<int> q;
    q.push(s);
    vs[s] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (!e[u].empty())
        for (auto v:e[u])
            if (!vs[v]) {
                q.push(v);
                vs[v] = true;
            }
    }
}
void solution () {
    init();
    res = 0;
    FOR (i, 1, n)
        if (!vs[i]) {
            ++res;
            BFS(i);
        }
    cout << res << endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}