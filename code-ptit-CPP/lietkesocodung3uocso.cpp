#include <bits/stdc++.h>
using namespace std;
int snt (long long n) {
    if (n<2)    return 0;
    if (n==2)   return 1;
    else if (n%2==0)    return 0;
    for (int i=3; i<=sqrt(n); i+=2) {
        if (n%i==0) return 0;
    }
    return 1;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        n = sqrt(n);
        for (int i=2; i<=n; i++) {
            if (snt(i)==1)  cout << i*i << " ";
        }
        cout << endl;
    }
    return 0;
}