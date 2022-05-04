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
typedef struct {
    int dau, cuoi, c;
} edge;
int n, dH, ne, neT;
vector<bool> chuaxet;
vector<vector<int> > C, T;
vector<edge> G, Tree;
void init () {
    cin >> n;
    C.assign(n+1, vector<int> (n+1, 0));
    G.resize(n+1), Tree.resize(n+1);
    FOR (i, 1, n)
        FOR (j, 1, n) {
            cin >> C[i][j];
            if (C[i][j] && i < j) {
                ++ne;
                G[ne].dau = i, G[ne].cuoi = j, G[ne].c = C[i][j];
            }
        }
}
void dfs_tree (int u) {
    chuaxet[u] = 0;
    FOR (v, 1, n) {
        if (T[u][v] && chuaxet[v])
            dfs_tree(v);
    }
}
void sort () {
    FORD (i, ne, 1) 
        FOR (j, 1, i-1) 
            if (G[j].c > G[j+1].c)
                swap(G[j], G[j+1]);
}
void krustal () {
    neT = dH = 0;
    T.assign(n+1, vector<int> (n+1, 0));
    sort();
    FOR (e, 1, ne) {
        chuaxet.assign(n+1, true);
        dfs_tree(G[e].dau);
        if (chuaxet[G[e].cuoi]) {// khong tao thanh chu trinh
            ++neT;
            Tree[neT].dau = G[e].dau;
            Tree[neT].cuoi = G[e].cuoi;
            Tree[neT].c = G[e].c;
            T[G[e].dau][G[e].cuoi] = T[G[e].cuoi][G[e].dau] = 1;
            dH += G[e].c;
        } 
    }
    if (neT == n-1) {
        cout << "dH = " << dH << endl;
        FOR (eT, 1, n-1)
            cout << Tree[eT].dau << " " << Tree[eT].cuoi << endl;
    }
    else cout << "Do thi khong lien thong\n";
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    init(); krustal();
    return 0;
}