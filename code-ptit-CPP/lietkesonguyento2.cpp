#include <bits/stdc++.h>
using namespace std;
long long a[100000]={0};
void sangnt () {
    a[0]=1, a[1]=1;
    for (long long i=2; i<=sqrt(100000); i++) {
        for (long long j=i*i; j<=100000; j+=i) {
            if (a[i]==0) {
                a[j] = 1;
            }   
        }
    }
}
int main () {
    sangnt();
    int t;
    cin >> t;
    while (t--) {
        long long c, b;
        cin >> c >> b;
        for (long long i=c; i<=b; i++) {
            if (a[i]==0)    cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}