#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tester() int t; cin >> t; while(t--)
#define PI atan(1)*4
#define in INT_MAX
#define im INT_MIN
#define fi first
#define se second
#define vi vector <int>
#define vll vector <ll>
#define pii pair <int, int>
#define mii map <int, int>
#define mp(x, y) make_pair(x, y)
#define all(x) x.begin() x.end();
const int Mod = 1e9 + 7;
const int nMax = 1e5 + 1;

void test() {
	int n, s;
	cin >> n >> s;
	vector <vi> a(n+1, vi(n+1));
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j) {
			cin >> a[i][j];
			if(!a[i][j])
				a[i][j] = 1e9;
		}
	vi d = a[s], parent(n+1, s);
	parent[s] = 0;
	d[s] = 0;
	for (int k = 2; k < n; ++k)
		for (int i = 1; i <= n; ++i)
			if(i != s)
				for (int j = 1; j <= n; ++j)
					if(d[i] > d[j] + a[j][i]) {
						d[i] = d[j] + a[j][i];
						parent[i] = j;
					}
	
	for (int i = 1; i <= n; ++i) {
		cout << "K/c " << s << " -> " << i << " = ";
		if(d[i] >= 1e8) cout << "INF;\n";
		else {
			cout << d[i] << "; ";
			int u = i;
			while(parent[u]) {
				cout << u << " <- ";
				u = parent[u];
			}
			cout << s;
			if(i == s) cout << " <- " << s;
			cout << endl;
		}
	}
}

int main() {
	faster();
	test();
	return 0;
}