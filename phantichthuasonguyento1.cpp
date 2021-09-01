#include <bits/stdc++.h>
using namespace std;
void uocsnt (long long m) {
    long long n = m;
    int k=2;
    while (k <= n) {
        int count = 0;
        while (n%k == 0) {
            count++;
            n /= k;
        }
        if (count != 0)
        cout << k << " " << count << " ";
        k++;
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        uocsnt(n);
        cout << endl;
    }
    return 0;
}