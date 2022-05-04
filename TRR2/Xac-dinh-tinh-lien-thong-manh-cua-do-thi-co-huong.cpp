#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>
#include <queue>
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define tester()    int t; cin >> t; while (t--)
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
vector<vector<int> > g;
vector<bool> vs;
int n;
void init () {
    cin >> n;
    g.clear(); g.resize(n+1);
    int x;
    FOR (i, 1, n)
        FOR (j, 1, n) {
            cin >> x;
            if (x)  g[i].push_back(j);
        }
}
void bfs (int s) {
    vs.assign(n+1, false);
    queue<int> q;
    q.push(s);
    vs[s] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (!g[u].empty())
        for (auto v:g[u]) 
            if (!vs[v]) {
                vs[v] = true;
                q.push(v);
            }
    }
}
void isStronglyConnected () {
    FOR (i, 1, n) {
        bfs(i);
        FOR (j, 1, n)
            if (!vs[j]) {
                cout << "not strongly connected\n";
                return;
            }
    }
    cout << "strongly connected\n";
}
void solution () {
    init();
    isStronglyConnected();
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}