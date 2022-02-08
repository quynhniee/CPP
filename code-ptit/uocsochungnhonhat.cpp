#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, kq=1;
        cin >> n;
        for (long long i=2; i<=n; i++) {
            kq = kq*i/ __gcd(kq, i);
        }
        cout << kq << endl;
    }
    return 0;
}