#include <bits/stdc++.h>
using namespace std;

struct Node {
    int u, v;
    int value;

    Node(int u, int v, int value) {
        this->u = u;
        this->v = v;
        this->value = value;
    }
};

bool cmp(Node a, Node b) {
    if (a.value == b.value) {
        if (a.u == b.u) {
            return a.v < b.v;
        }
        return a.u < b.u;
    }
    return a.value < b.value;
}

void Kruskal(vector<Node> E, int n) {
    int dH = 0;
    vector<pair<int, int>> T;
    vector<bool> vs(n + 1, false);

    sort(E.begin(), E.end(), cmp);
    
    for (Node i : E) {
        if (!vs[i.u] or !vs[i.v]) {
            dH += i.value;
            vs[i.u] = vs[i.v] = true;
            T.push_back({i.u, i.v});
        }
    }

    cout << "dH = " << dH << "\n"; 
    for (auto i : T) {
        cout << i.first << " " << i.second << "\n";
    }
}

int main() {
    int n; cin >> n;
    int a[100][100];
    vector<Node> E;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            if (i < j and a[i][j] != 0) {
                E.push_back(Node(i, j, a[i][j]));
            }
        }
    }
    Kruskal(E, n);
    return 0;
}