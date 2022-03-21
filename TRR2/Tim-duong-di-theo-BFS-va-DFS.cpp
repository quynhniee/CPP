#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <stack>
#include <utility>
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define tester()    int t; cin >> t; while (t--)
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
vector<vector<int> > e;
vector<bool> vs;
vector<int> mark;
int s, t, n;
void init () {
    cin >> n >> s >> t;
    e.clear(); e.resize(n+1);
    int x;
    FOR (i, 1, n)
        FOR (j, 1, n) {
            cin >> x;
            if (x) 
                e[i].push_back(j);
        }
}
void trace () {
    int temp = t;
    while (temp != -1) {
        cout << temp << " ";
        temp = mark[temp];
    }
    cout << endl;
}
void DFS () {
    vs.assign(n+1, false);
    mark.assign(n+1, -1);
    stack<int> st;
    st.push(s);
    vs[s] = true;
    while (!st.empty()) {
        int u = st.top();
        st.pop();
        if (!e[u].empty()) 
            for (auto v:e[u]) 
                if (!vs[v]) {
                    vs[v] = true;
                    st.push(u);
                    st.push(v);
                    mark[v] = u;
                    break;
                }
    }
    if (!vs[t]) return;
    cout << "DFS path: ";
    trace();
}
void BFS () {
    vs.assign(n+1, false);
    mark.assign(n+1, -1);
    queue<int> q;
    q.push(s);
    vs[s] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        if (!e[u].empty())
            for (auto v:e[u])
                if (!vs[v]) {
                    vs[v] = true;
                    q.push(v);
                    mark[v] = u;
                }
    }
    if (!vs[t]) return;
    cout << "BFS path: ";
    trace();
}
void test () {
    init();
    DFS();
    BFS();
    if (!vs[t]) 
        cout << "no path";
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    test();
    return 0;
}