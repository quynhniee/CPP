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
int V, x, y, components;
vector<vector<int> > g;
vector<pair<int, int> > edge;
vector<bool> vs;
void init () {
    components = 0, x = y = -1;
    cin >> V;
    g.clear(); g.resize(V+5);
    edge.clear();
    vs.assign(V+5, false);
    int x;
    FOR (i, 1, V)
        FOR (j, 1, V) {
            cin >> x;
            if (x) {
                g[i].push_back(j);
                if (j > i)  edge.push_back({i, j});
            }
        }
}
void bfs (int s) {
    queue<int> q;
    q.push(s);
    vs[s] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (!g[u].empty())
        for (int v:g[u]) {
            if ((u == x && v == y) || (u == y && v == x))
                continue;
            if (!vs[v]) {
                q.push(v);
                vs[v] = true;
            }
        }
    }
}
void interconnectionComponents (int &cou) {
    FOR (i, 1, V) 
        if (!vs[i]) {
            ++cou;
            bfs(i);
        }
}
void findingBridge () {
    int cou = 0;
    vs.clear(); vs.assign(V+5, false);
    FOR (i, 1, V) 
        interconnectionComponents(cou);
    if (cou > components)
        cout << x << " " << y << endl;
}
void solution () {
    init();
    interconnectionComponents(components);
    FOR (i, 0, edge.size()-1) {
        x = edge[i].first, y = edge[i].second;
        findingBridge();
    }
    cout << endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}