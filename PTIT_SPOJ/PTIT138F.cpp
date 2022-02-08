/*
PTIT138F - BÀI F - HÀNG ĐỢI
https://www.spoj.com/PTIT/problems/PTIT138F/
*/

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
vector<string> a, ans;
int n, m, from, to;
vector<int> vs;
void move () {
    cin >> from >> to;
    from--, to--;
    vs[from]++;
    ans[to] = a[from];

}
void output () {
    for (auto i:ans)  cout << i << " ";
    cout << endl;
}
void test () {
    cin >> m >> n;
    a.resize(m), ans.resize(m), vs.resize(m, 0);
    for (auto &i:a) cin >> i;
    while (n--) {
        move();
    }
    vector<int> not_vs;
    for (int i = m-1; i >= 0; i--)
        if (vs[i] == 0)
            not_vs.push_back(i);
    for (int i = 0; i < m; i++) {
        if (ans[i] == "") {
            ans[i] = a[not_vs.back()];
            not_vs.pop_back();
        }
    }
    output();
    a.clear(), ans.clear(), vs.clear();
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}