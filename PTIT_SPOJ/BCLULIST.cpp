/*
BCLULIST - Danh sách may mắn
https://www.spoj.com/PTIT/problems/BCLULIST/
*/
#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;
 
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

LL dp[2005][15] = {};

LL n,m,dem;
void Try(LL data,LL index) {
	if( data <= m && index == n ) {
		dp[data][index]++;
		dem++;
		return;
	}
	for(LL i = data*2 ; i <= m ; i++ ) {
		if( data*(1<<(n-index)) > m ) {
			return;
		} 
		if( i <= m && index+1 <= n && dp[i][index+1] ) {
			dp[data][index] += dp[i][index+1];
			dem += dp[i][index+1];
			continue;
		}
		if( i <= m && index+1 == n ) {
			dp[i][index+1]++;
			dem++;
			continue;
		}
		if( i <= m && index < n ) {
			Try(i,index+1);
			dp[data][index] += dp[i][index+1];
		}
	}
}

LL test = 1;
void solve() {
	FOR(i,1,2000) {
		FOR(j,1,10) {
			dp[i][j] = 0;
		}
	}
	cin >> n >> m;
	dem = 0;
	for(LL i = 1 ; i*(1<<(n-1)) <= m ; i++ ) {
		Try(i,1);
	}
	cout << "Data set " << test++ << ": " << n << ' ' << m << ' ' << dem << endl;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
	cin >> t;
	while( t-- ) {
	    solve();	
	} 
    return 0;
}
/*  TLE
#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
vector<int> ans;
int n, m, number;


void digit (int pos, int start, int end) {
    for (int i = end; i >= start; i--) {
            ans[pos] = i;
            if (pos == 0)  {
                number++;
            }
            else    digit(pos - 1, start / 2, ans[pos] / 2);
    }
}


int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        number = 0; 
        cin >> n >> m;
        
        cout << "Data set " << i << ": ";
        cout << n << " " << m << " " << number << endl;
        ans.clear();
    }
    return 0;
}
*/