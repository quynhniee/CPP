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
    int n, m;
    cin >> n >> m;
    vector<int> a1(n), a2(m);
    int mark[100000]={0};
    for (auto &i:a1)   {
        cin >> i;
        mark[i]++;
    }
    for (auto &i:a2)    cin >> i;
    sort(a1.begin(), a1.end());
    for (auto i:a2) {
        while (mark[i] != 0) {
            cout << i << " ";
            mark[i]--;
        }
    }
    for (auto i:a1)   
        if (mark[i] != 0)
        cout << i << " ";

    cout << endl;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
