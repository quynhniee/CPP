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
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int n;
bool check (string s) {
    string s1 = s;
    reverse(s.begin(), s.end());
    return s == s1;
}
void output (string s) {
    for (auto i : s)    cout << i << " ";
    cout << endl;
}
void binary (int pos, string s) {
    if (pos == 0) {
    	if (check(s))	output (s);
        return;
    }
    else {
        binary(pos - 1, s + "0");
        binary(pos - 1, s + "1");
    }
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    binary (n, "");
    return 0;
}