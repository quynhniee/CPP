#include <bits/stdc++.h>
using namespace std;
long long a[100000]={0};
void sangnt () {
    a[0]=1, a[1]=1;
    for (int i=2; i<=sqrt(100000); i++) {
        for (int j=i*i; j<=100000; j+=i) {
            if (a[i]==0) {
                a[j] = 1;
            }   
        }
    }
}
void uocsnt (long long m) {
    long long n = m;
    long long k1=2, max = 0;
    for (int i=2; i<=sqrt(n); i++) {
        if (a[i]==0 && n%i==0) {
            max = (max > i) ? max : i;
            while (n%i == 0) {
                n /= i;
            }
        }
    }
    if (n != 1) max = (max > n) ? max : n;
    cout << max;
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