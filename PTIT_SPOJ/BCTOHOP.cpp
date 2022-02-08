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
int n, k;
vector<int> a;
void init () {
    cin >> n >> k;
    for (int i=1; i<=k; i++)    
        a.push_back(i);
}
void output () {
    for (int i:a)   cout << i << " ";
    cout << endl;
}
void Combination (int i) {
    for (int j = a[i]; j <= n - k + i + 1; j++) {
        a[i] = j;
        if (i == k-1) output();
        else {
            a[i+1] = a[i] + 1;
            Combination(i+1);
        }
    }
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    init();
    Combination(0);
    return 0;
}