#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, a[100000]={};
        cin >> n;
        for (int i=0; i<n; i++) {
           cin >> a[i];
        }
        sort(a, a+n);
        cout << a[n-1] << std::endl;
    }
    return 0;
}