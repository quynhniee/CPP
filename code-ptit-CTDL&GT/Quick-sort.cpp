
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
vector<int> a;
int n;
void init () {
    cin >> n;
    a.resize(n);
    for (auto &i:a) cin >> i;
}
int partition (int l, int r) {
    int i = l, pivot = a[r];
    FOR(j, l, r-1) 
        if (a[j] <= pivot) {
            swap(a[i], a[j]);
            i++;
        }
    swap(a[i], a[r]);
    return i;
}
void quickSort (int l, int r) {
    if (l <= r) {
        int pos = partition(l, r);
        quickSort (l, pos - 1);
        quickSort (pos + 1, r);
    }
}
void output () {
    for (auto i:a)  cout << i << " ";
    cout << endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        init();
        quickSort(0, n-1);
        output();
        a.clear();
    }
    return 0;
}