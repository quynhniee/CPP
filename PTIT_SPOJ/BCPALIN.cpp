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
void solution () {
    string s;
    cin >> s;
    string s0 = s;
    reverse(s.begin(), s.end());
    (s0 == s)? cout << "YES\n" : cout << "NO\n";
}
int main () {
    ios_base::sync_with_stdio(0);
//    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        scanf("\n");
        solution();
    }
    
    return 0;
}